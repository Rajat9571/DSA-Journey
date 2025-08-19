#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string arr[]={"0123","0023","456","00182","940","2901"};
    
    //1st Method.

    // vector<int>v;
    // for(int i=0;i<6;i++)
    // {
    //     long long a = stoll(arr[i]);
    //     v.push_back(a);
    // }
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // int max=v[0];
    //  for(int i=1;i<v.size();i++)
    // {
    //     if(v[i]>max)
    //     {
    //         max=v[i];
    //     }
    // }
    // for(int i=0;i<v.size();i++)
    // {
    //     if(v[i]==max)
    //     {
    //         cout<<max<<" is the largest among the string at the position of "<<i<<endl;
    //     }
    // }

    //2nd method
    int max=stoi(arr[0]);
    for(int i=0;i<6;i++)
    {
        int x=stoi(arr[i]);
        if(x>max)
        { 
            max=x;
        }
    }
    for(int i=0;i<6;i++)
    {
        int x=stoi(arr[i]);
        if(x==max)
        {
            cout<<max<<" is the max value present at index "<<i<<endl;
        }
    }   
    return 0;  
}