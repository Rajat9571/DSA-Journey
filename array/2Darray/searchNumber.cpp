//Q2)search number in given array.

#include<iostream>
using namespace std;
bool findkey(int arr[][3],int rows,int cols,int key)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(key==arr[i][j])
            //if key found.
            return true;
        }
    }
//if key not found.
    return false;
}

int main()
{
    int arr[3][3]={1,2,3,
    4,5,6,
    7,8,9};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int key=10;
    if(findkey(arr,3,3,key))
    {
        cout<<"key is present";
    }
    else{
        cout<<"key is not present";
    }
    return 0;
}