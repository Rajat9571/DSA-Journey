#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,1,2,3,4};
    int n=5;

   //Best optimised bubble sort method.(T.C = O(n))

    for(int i=0;i<n-1;i++)
    {
        bool flag=true;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                flag=false;
                swap(arr[j],arr[j+1]);
            }   
        } 
      if(flag==true)
            break;
    }

    //2nd method average optimised method(T.C= o(n^2))

    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=0;j<n-1-i;j++)
    //     {
    //         if(arr[j]>arr[j+1])
    //         {
    //             swap(arr[j],arr[j+1]);
    //         }   
    //     } 
    // }

    //worst method(T.C= o(n^2))

    //  for(int i=0;i<n-1;i++)
    // {
    //     for(int j=0;j<n-1;j++)
    //     {
    //         if(arr[j]>arr[j+1])
    //         {
    //             swap(arr[j],arr[j+1]);
    //         }   
    //     } 
    // }

    for(int i=0;i<n;i++) 
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}