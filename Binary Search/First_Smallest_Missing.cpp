#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int>arr{0,1,2,4,5,6,7,9,12};
    vector<int>arr{0,1,2,3,4,5,6,7};
    int low=0;
    int high=arr.size()-1;
    int mid;
    while(low<=high)
    {
        mid= low+(high-low)/2;
        if(arr[mid]==mid)
        {
            low= mid+1;
        }
        else if(arr[mid]>mid) high= mid-1; 
    }
    if (low == arr.size()) {
        cout << "-1";  //
    } else {
        cout << low;   
    }

    //or for returning 
    // return (low==arr.size() ? -1 : low);
    
}

