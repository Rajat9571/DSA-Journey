//Q1)print array in row wise,column wise and find sum in row wise,column wise.

#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    cout<<"give the input:"<<endl;
    //give input to array.
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    //print array in row wise.
    cout<<"print array in row wise:"<<endl;
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //print array in column wise.
    cout<<"print array in column wise:"<<endl;
      for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }


    //sum in row wise.
    cout<<"sum in row wise"<<endl;
     for(int i=0;i<3;i++)
    {   
        int sum=0;         //sum=0 here so that 2nd row sum again start with 0.
        for(int j=0;j<3;j++)
        {
            sum=sum+arr[i][j];
             
        }
        cout<<sum<<endl;     
    }

    //sum in column wise.
    cout<<"sum in column wise:"<<endl;
    for(int i=0;i<3;i++)
    {   
        int sum=0;         //sum=0 here so that 2nd column sum again start with 0.
        for(int j=0;j<3;j++)
        {
            sum=sum+arr[j][i];
             
        }
        cout<<sum<<" ";    
    }

    return 0;
}