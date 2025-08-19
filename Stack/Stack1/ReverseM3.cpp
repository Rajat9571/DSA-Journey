#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void print(stack<int> st)
{
    while(st.size()>0)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main()
{
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    cout<<endl;
    vector<int>arr;
    while(st.size()>0)
    {
        arr.push_back(st.top());
        st.pop();
    }
    for(int i=0;i<arr.size();i++)
    {
        st.push(arr[i]);
    }
    print(st);
}