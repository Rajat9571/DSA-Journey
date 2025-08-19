#include<iostream>
using namespace std;
int main()
{
    int arr[5],n;
    cout<<"How many number you want to add in array;"<<endl;
    cin>>n;
    cout<<"enter the values of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"print the double of array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<2*arr[i]<<" "<<endl;
    }
    return 0;
  }