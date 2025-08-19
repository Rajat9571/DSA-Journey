
#include<iostream>
using namespace std;
class Stack{            //use define data structure;
    public:
      int arr[5];
      int idx;
    Stack(){            //constructor
        idx=-1;
    }
    void push(int val){
        if(idx==sizeof(arr)/sizeof(arr[0])-1)
        {
            cout<<"stack overflow"<<endl;
        }
        idx++;
        arr[idx]=val;
    }
    
    void pop(){
        if(idx==-1)
        {
            cout<<"stack underflow"<<endl;
        }
        idx--;
    }

    void top(){
        if(idx==-1)
        {
            cout<<"stack is empty"<<endl;
        }
        cout<<arr[idx]<<endl;
    }

    int size(){
        return idx+1;
    }

    void display(){
        for(int i=0;i<idx+1;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
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
    st.push(70);
    st.display();
}