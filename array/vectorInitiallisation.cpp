#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //method 1
    //insert
    vector<int>arr;
    arr.push_back(5);
    arr.push_back(10);
     arr.push_back(15);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Remove
    arr.pop_back(); //here last insert value is removed
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //finding size of array after removing
    cout<<"size of array:"<<arr.size()<<endl;

    //method 2.

    int n;
    cout<<"enter the value of n:";
    cin>>n;
    vector<int>brr(n,2);  //here 2 is the value in array.
    cout<<"size of array:"<<brr.size()<<endl; 
    cout<<"capacity of array:"<<brr.capacity()<<endl;
    cout<<"values in array is:";
    for(int i=0;i<brr.size();i++)
    {
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    
    //3rd method.

    vector<int> crr{10,20,30,40,50};
    cout<<"values in array is:";
    for(int i=0;i<crr.size();i++)
    {
        cout<<crr[i]<<" ";
    }
    cout<<endl;

     return 0;
}