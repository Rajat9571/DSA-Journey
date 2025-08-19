#include<iostream>
using namespace std;
void printArray(int arr[][3],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void transpose(int arr[][3],int row,int col,int transposearr[][3])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            transposearr[j][i]=arr[i][j];
        }
    }
}
int main()
{
    int arr[3][3]={1,2,3,
    4,5,6,
    7,8,9};
    cout<<"print the given array"<<endl;
    printArray(arr,3,3);
    int transposearr[3][3];
    cout<<"transpose starting"<<endl;
    transpose(arr,3,3,transposearr);
    printArray(transposearr,3,3);
    return 0;
}