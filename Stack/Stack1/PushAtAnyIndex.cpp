#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void print(stack<int>&st)
{
    stack<int>temp;
    while(st.size()>0)
    {
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0)
    {
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
}

//Push at any index using 1 extra stack;
// void pushAtBottom(stack<int>&st, int idx,int val)
// {
//     stack<int>temp;
//     while(st.size()>idx)
//     {
//         temp.push(st.top());
//         st.pop(); 
//     }
//     st.push(val);
//     while(temp.size()>0)
//     {
//         st.push(temp.top());
//         temp.pop();
//     }
// }


//Push at any index using an array;
void pushAtBottom(stack<int>&st, int idx,int val)
{
    vector<int>arr;
    while(st.size()>idx)
    {
        arr.push_back(st.top());
        st.pop();
    }
    st.push(val);
    for(int i=arr.size()-1;i>=0;i--)
    {
        st.push(arr[i]);
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
    pushAtBottom(st,2,70);
    print(st);
}