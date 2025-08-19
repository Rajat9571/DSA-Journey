#include<iostream>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node(int val){
            this->val= val;
            this->next= NULL;
        }
};

class Queue{
    public:
     Node* head;
     Node* tail;
     int count;
     Queue(){
        head=tail=NULL;
        count=0;
     }
     void push(int val){
        Node* temp = new Node(val);
        
        if(head == NULL)
        {
            head = tail = temp;
            count++;
            return;
        }
        tail->next=temp;
        tail=temp;
        count++;
     }

     void pop()
     {
        if(head==NULL)
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        Node* oldHead= head;
        Node* newHead = head->next;
        head = newHead;
        if(head==NULL)
        {
            tail=NULL;
        }
        oldHead->next=NULL;  //cut the link between the old head and the new head(present head)
        delete oldHead;
        count--;
     }

     void front(){
        if(head==NULL){
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<"front element of Queue is "<<head->val<<endl;
     }

      void back(){
        if(head==NULL){
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<"last element of Queue is "<<tail->val<<endl;
     }

     void display(){
        if(head==NULL){
            cout<<"Queue is empty"<<endl;
        }
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
     }
     int size(){
        return count;
     }
};

int main()
{
    Queue que;
    que.push(10);
    que.push(20);
    que.push(30);
    que.push(40);
    que.push(50);
    que.display();
    cout<<que.size()<<endl;
    que.pop();
    que.display();
    cout<<que.size()<<endl;;
    que.front();
    que.back();
}