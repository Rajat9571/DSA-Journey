#include<iostream>
#include<vector>
using namespace std;
class Stack{
    public: 
        vector<int>v;  //no overflow condition.
        Stack(){    //constructor
        
        }
        void push(int val){
            v.push_back(val);
        }
        void pop(){
            if(v.size()==0){
            {
                cout<<"Stack Underflow"<<endl;
                return;
            }
        }
        v.pop_back();
    }
        void top(){
            if(v.size()==0)
            {
                cout<<"Stack is empty"<<endl;
            }
            cout<<v[v.size()-1]<<endl;
        }
        int size(){
            return v.size();
        }
        void display(){
            for(int i=0;i<v.size();i++)
            {
                cout<<v[i]<<" ";
            }
        }
};
int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.top();
    cout<<st.size()<<endl;
    st.pop();
    st.push(50);
    st.push(60);
    cout<<st.size()<<endl;
    st.display();
}