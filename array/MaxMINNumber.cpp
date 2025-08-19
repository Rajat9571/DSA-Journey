#include<iostream>
using namespace std;
int main()
{
    int arr[]={-2,2,3,9,5,6};
    int size=6;
    int i;
    int max=INT_MIN;   //"INT_MIN" is used to initialized the minimum value.
    int min=INT_MAX;
    for(i=0;i<size;i++)
    {
        if(arr[i]>max)
        max=arr[i];
        if(arr[i]<min)
        min=arr[i];
    }
    cout<<"max no. in array is:"<<max<<endl;
    cout<<"min no. in array is:"<<min<<endl;
    return 0;
}
 