#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{1,2,3,4,5,6,7,8,9,10,1,15,1};
    //formation of prefix sum
    for(int i=1 ;i<arr.size();i++)
    {
        arr[i]+=arr[i-1];
    }

    //check if x is existed for partition

    bool flag = false;
    int index;
    for(int i=0;i<arr.size();i++)
    {
        if(2*arr[i]==arr[arr.size()-1])
        {
            index = i;
            flag = true;
            break;
        }
    }
    if(flag) cout<<"YES partitioned can be possible and it is happening in index no: "<<index;
    else cout<<"cannot be partitioned";

    return 0;
}