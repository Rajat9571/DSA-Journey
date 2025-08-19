#include<iostream>
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
    stack<int>temp;
    while(st.size()>0)
    {
        temp.push(st.top());
        st.pop();
    }
    print(temp);
}