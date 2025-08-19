#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{100,80,60,81,70,60,75,85};
    stack<int>st;
    int n=arr.size();
    vector<int>ans(n);
    ans[0]=1;
    st.push(0);
    for(int i=1;i<n;i++)
    {
        while(!st.empty() && arr[i]>arr[st.top()])
        {
            st.pop(); 
        }
        if (st.size()==0) ans[i]=-1;
        else ans[i]=st.top();
        ans[i]=i-ans[i];
        st.push(i);
    }
    for(int i=0; i<n; i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}