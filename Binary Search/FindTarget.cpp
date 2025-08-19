#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{1,2,3,4,5,9,15,18,21,24};
    int target = 15;
    int low=0;
    int high=arr.size()-1;
    bool flag=false;
    int mid;
    while(low<=high)
    {
        mid= (low+high)/2;
        if(arr[mid]==target)
        {
            flag=true;
            cout<<"Element found at index "<<mid;
            break;
        }
        else if(arr[mid]<target)
        {
            low=mid+1;
        }
        else if(arr[mid]>target){
            high= mid-1;
        }
    }
    if(flag==false) 
    {
        cout<<"Element not found";
    }
    return 0;
}