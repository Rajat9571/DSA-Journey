#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s="AZYZXBDJKX";
    string str;    //new string

    //put values in new string(str) if its greater than or equal to X
     for(int i=0;i<s.size();i++)
    {
        if(s[i]>='X')
        {
        str.push_back(s[i]);
        }
    }

//sorting(Bubble)

    for(int i=0;i<str.size()-1;i++)      //n-1 times 
    {
        bool flag=true;
        for(int j=i; j<str.size()-1-i; j++)
            {
                if(str[j]<str[j+1])
                {
                    flag=false;
                    swap(str[j],str[j+1]);
                }
            }
            if(flag==true)
            break;
    }
    for(int i=0;i<str.size();i++)
    {
        cout<<str[i]<<" ";
    }
    return 0;
}
