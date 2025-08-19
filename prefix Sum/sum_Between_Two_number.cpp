#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{1,4,5,2,5,6,8,88,44};
    for(int i=1;i<arr.size();i++)
    {
        arr[i]+= arr[i-1];   //replacing the array with the sum of the previous element and the current element.
    }
    cout<<"the sum of the array which is now the new array is ";
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //sum between position 2 and 5
    int a;
    cout<<"enter the position of first element: ";
    cin>>a;
    int b;
    cout<<"enter the position of second element: ";
    cin>>b;
    
    int sum;
    for(int i=0;i<arr.size();i++)
    {
        sum = arr[b] - arr[a-1];
    }
    cout<<"sum between position "<<a<<" and "<<b<<" is "<<sum<<endl;
    return 0;
}