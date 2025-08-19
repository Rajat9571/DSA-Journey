#include<iostream>
using namespace std;
int main()
{
    // string str ="rajat";
    // int count=0;
    // for(int i=0;i<5;i++)
    // {
    //     if(str[i]=='a'|| str[i] =='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
    //     {
    //         count++;
    //     }
    // }
    // cout<<"No of vowels in string:"<<count<<endl;

    //2nd method
    int i=0;
    int count=0;
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
        if(str[i]=='a'|| str[i] =='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            count++;
        }
        i++;
    }
    cout<<"No of vowels in string:"<<count<<endl;
    return 0;
}