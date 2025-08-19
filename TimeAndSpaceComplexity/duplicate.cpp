#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int x;
    int arr[]={6,3,2,4,1,7,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n,0);
    for(int i=1;i<n;i++)
    {
        v[arr[i]]++;       // x=arr[i]; v[x]++;
    }
    for(int i=1;i<v.size();i++)
    {
        if(v[i]>1)
        {
            cout<<"duplicate is "<<i;
        }
    }
    return 0;
}