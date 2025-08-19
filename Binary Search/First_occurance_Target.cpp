#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{1,2,2,3,3,3,3,3,4,4,5,8,9};
    int target = 4;
    int low=0;
    int high=arr.size()-1;
    bool flag=false;
    int mid;
    while(low<=high)
    {
        mid= low+(high-low)/2;
        if(arr[mid]==target)
        {
            while(arr[mid]==target)
            {
                mid--;
            }
            cout<<"first Occurance of "<<target<<" is found at index "<<mid+1<<endl;
            flag=true;
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
    if(flag==false) cout<<"target doen't found";
    return 0;
}

