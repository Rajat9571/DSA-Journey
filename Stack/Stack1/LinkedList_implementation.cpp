#include<iostream>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            this->next=NULL;
        }
};
class Stack{
    public:
        Node* head;
        int size;
        Stack(){
            head=NULL;
            size=0;
        }
        void push(int val){
            Node* temp = new Node(val);
            temp->next=head;
            head=temp;
            size++;
        }
        void pop(){
            if(size==0)
            {
                cout<<"Stack is empty"<<endl;
                return;
            }
            head=head->next;
            size--;
        }
        void top(){
            if(size==0)
            {
                cout<<"Stack is empty"<<endl;
                return;
            }
            cout<<head->val<<endl;
            
        }
        
        // void display(){
        //     while(head!=NULL){
        //         cout<<head->val<<" ";
        //         head=head->next;
        //     }
        // }

        void print(Node* temp){
            if(temp==NULL) return;
           
            print(temp->next);
            cout<<temp->val<<" ";
        } 
        void display(){
            Node* temp= head;
            print(temp);
        }
};

int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.top();
    cout<<st.size<<endl;
    st.pop();
    cout<<st.size<<endl;
    st.push(50);
    st.push(60);
    cout<<st.size<<endl;
    st.display();
    
}
