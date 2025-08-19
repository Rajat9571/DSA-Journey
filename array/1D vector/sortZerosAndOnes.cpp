//Q)sorting 0's and 1's

#include<iostream>
using namespace std;
int main()
{
    int arr[]={0,0,1,1,0,1,0,0};
    int size=8;
    int start=0;
    int end=size-1;
    arr[start]=0;
    arr[end]=1;
    int i=0;
    while(i!=end)
    {
        if(arr[i]==0)
        {
            swap(arr[start],arr[i]) ;
            start++;
            i++;  
        }
        if(arr[i]==1)
        {
            swap(arr[i],arr[end] );
            end--;        
        }
    }
    
        for(auto val:arr)          
        {                          
            cout<<val<<" ";
        }
        //OR
        //for(int i=0;i<size;i++)
        // {
        //     cout<<arr[i]<<" ";
        //  }

          
    return 0;
}
 