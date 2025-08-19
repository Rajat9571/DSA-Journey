#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{1,2,3,4,5,9,15,18,21,24};
    int target = 22;
    int low=0;
    int high=arr.size()-1;
    bool flag=false;
    int mid;
    while(low<=high)
    {
        mid= low+(high-low)/2;
        if(arr[mid]==target)
        {
            flag=true;
            cout<<"Lower Bound of "<<target<<" is "<<arr[mid+1]<<endl;
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
    if(flag==false) cout<<"Lower Bound of "<<target<< " is "<<arr[low]<<endl;
    return 0;
}

