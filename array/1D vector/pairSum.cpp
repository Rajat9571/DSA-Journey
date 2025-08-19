//Q)finding pair sum in 1 array.


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6}; 
    int sizea=6;
    cout<<"enter the sum number:";
    int n;
    cin>>n;
    cout<<"pair of sum is:";
    for(int i=0;i<sizea;i++)
    {
        for(int j=i+1;j<sizea;j++)
        {
            if(arr[i]+arr[j]==n)
            {
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }         
        }      
    }    
    return 0;
}