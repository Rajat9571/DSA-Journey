#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main()
{
    queue<int>que;
    stack<int>st;
    que.push(10);
    que.push(20);
    que.push(30);
    que.push(40);
    que.push(50);
    cout<<"Queue is :";
    while(!que.empty()){
        cout<<que.front()<<" ";
        st.push(que.front());
        que.pop();
    }
    cout<<endl;

    cout<<"Reverse Queue is :";
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}