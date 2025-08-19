#include<iostream>
using namespace std;
int main()
{
    int i=0;
    int n;
    cout<<"enter the number of string:";
    cin>>n;
    char str[n];
    cout<<"enter the string:";
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    cout<<"String is "<<str<<endl;
    while(str[i]!='\0')
    {
        if(i%2==0)
        {
            str[i]='a';
        }
        i++;
    }
    cout<<"updated string:"<<str;
    return 0;
}