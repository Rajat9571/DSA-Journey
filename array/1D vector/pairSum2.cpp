//Q)finding pair sum in both array.


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6};
    int brr[]={3,4,5,2,6,7};
    int sizea=6;
    int sizeb=6;
    cout<<"enter the sum number:";
    int n;
    cin>>n;

//pair of sum in 1st array.
    for(int i=0;i<sizea;i++)
    {
        for(int j=i+1;j<sizea;j++)
        {
            if(arr[i]+arr[j]==n)
            {
                cout<<"pair of sum in array 1 is:"<<arr[i]<<" "<<arr[j]<<endl;
            }         
        }      
    }    

//pair of sum in 2nd array.
    for(int i=0;i<sizeb;i++)
        {
            for(int j=i+1;j<sizeb;j++)
            {
                if(brr[i]+brr[j]==n)
                {
                    cout<<"pair of sum in array 2 is:"<<brr[i]<<" "<<brr[j]<<endl;
                }         
            }      
        }    

//pair of sum between both array.
    for(int i=0;i<sizea;i++)
        {
            for(int j=0;j<sizeb;j++)
            {
                if(arr[i]==brr[j])
                {
                brr[j]=INT_MIN;
                }
                if(arr[i]+brr[j]==n)
                {
                    cout<<"pair of sum between both array is:"<<arr[i]<<" "<<brr[j]<<endl;
                }     
            }      
        }    

    return 0;
}