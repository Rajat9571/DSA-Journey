#include<iostream>
using namespace std;
int main()
{
    int arr[5],n;
    cout<<"How many number you want in array:"<<endl;
    cin>>n;
    cout<<"enter the values of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Replace the values of array with 1:"<<endl;
    for(int i=0;i<n;i++)
    {
        arr[i]=1;
         cout<<arr[i]<<" ";
    }
    return 0;
}