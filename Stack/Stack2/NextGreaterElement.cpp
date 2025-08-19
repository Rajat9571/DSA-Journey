#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
    stack<int>st;
    vector<int>arr{3,1,2,7,4,6,2,3};
    int n=arr.size();
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int>ans(n); 
    
    // //Method-1 Brute force method  T.C= O(n^2), S.C= O(1).
    // for(int i=0; i<n; i++)
    // {
    //     ans[i]=-1;
    //     for(int j=i+1; j<n; j++)
    //     {
    //         if(arr[j]>arr[i])
    //         {
    //             ans[i]=arr[j];
    //             break;
    //         }
    //     }
    // }

    //Method-2 Using a stack  pop->ans->push. T.C= O(n), S.C= O(n).``````` 
    ans[n-1]=-1;
    st.push(arr[n-1]);
    for(int i=n-2; i>=0; i--)
    {
        //pop all the elements from the stack which are smaller than arr[i].
        while(st.size()>0 && st.top()<=arr[i])
        {
            st.pop();
        }
        //mark the answer in the ans array.
        if(st.size()==0) ans[i]=-1; 
        else ans[i]= st.top();
        //push the current element in the stack.
        st.push(arr[i]);
    }


    for(int i=0; i<n; i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
 }