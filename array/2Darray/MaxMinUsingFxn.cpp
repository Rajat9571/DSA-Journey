//Q)find maximum in 2D  array using function.

#include<iostream>
#include<limits.h>
using namespace std;
int getmax(int arr[][3],int row,int col,int maxi)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]>maxi)
            {
                maxi=arr[i][j];
            }
        }
    }
    return maxi;
}
int main()
{
    int arr[3][3]={1,2,3,
    4,5,6,
    7,8,10};
    cout<<"given array is:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int maxi=INT_MIN;
    cout<<"maximum number in given array is:"<<getmax(arr,3,3,maxi);
    return 0;
}