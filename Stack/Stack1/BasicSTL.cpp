#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>st;
    // cout<<st.size()<<endl;  //0
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // cout<<st.size()<<endl;   //4
    // st.pop();
    // cout<<st.size()<<endl;   //3
    // cout<<st.top()<<endl;    //30

    //printing the stack while emptying the stack;
    // while(st.size()>0)
    // {
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }


    // //printing the stack without emptying the stack;
    // stack<int> temp;
    // while(st.size()>0)
    // {
    //     cout<<st.top()<<" ";
    //     temp.push(st.top());
    //     st.pop();
    // }
    // while(temp.size()>0)
    // {
    //     st.push(temp.top());
    //     temp.pop();
    // }
    // cout<<endl<<st.size();

    //printing the stack in reverse order
    stack<int> temp;
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