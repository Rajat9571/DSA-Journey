//Q)find the union of two array after eliminating duplicate number.

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6};
    int sizea=6;
    int brr[]={5,6,7,8,9};
    int sizeb=5;
    vector<int>ans;

//this is to eliminate duplicate number.

    for(int i=0;i<sizea;i++)
    {
        for(int j=0;j<sizeb;j++)
        {
            if(arr[i]==brr[j])
            {
                brr[j]=INT_MIN;
    
            }            
        }
    }

//this is insert element of array arr.
     for(int i=0;i<sizea;i++)
    {
        ans.push_back(arr[i]);
    }

//this is to insert element of array brr after eleminating duplicate number.

    for(int j=0;j<sizeb;j++)
    {
        if(brr[j]!=INT_MIN)
        {
            ans.push_back(brr[j]);
        }

    }

   
//this for printing union of both array after eliminating duplicate number.
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}