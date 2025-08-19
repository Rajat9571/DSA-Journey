// #include <iostream>
// using namespace std;

// class Node{
//     public:
//         int val;
//         Node* next;
//         Node(int val){
//             this->val = val;
//             this->next = NULL;
//         }
// };
// void lefttomid(Node* head){
//     Node* temp = head;
//     int count = 0;
//     while(temp!=NULL){
//         temp= temp->next;
//         count++;
//     }
//     int midnode = count/2;
//     Node* mid = head;
//     for(int i=1; i<=midnode; i++){
//         mid = mid->next;
//     }
//     mid->next = NULL;
// }
// void display(Node* head){
//     if(head == NULL) return;
//     cout<<head->val<<" ";
//     display(head->next);
// }

// int main(){
//     Node* a = new Node(1);
//     Node* b = new Node(2);
//     Node* c = new Node(3);
//     Node* d = new Node(4);
//     Node* e = new Node(5);
//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;
//     display(a);
//     cout<<endl;
//     lefttomid(a);
//     display(a);
// }


//M-2 by using 2 pointers methods

#include <iostream>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};
void lefttomid(Node* head){
    Node* fast = head;
    Node* slow= head;
    while(fast!=NULL && fast->next!=NULL){
        slow= slow->next;
        fast= fast->next->next;
    }
    slow->next= NULL;    
}
void display(Node* head){
    if(head == NULL) return;
    cout<<head->val<<" ";
    display(head->next);
}

int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    display(a);
    cout<<endl;
    lefttomid(a);
    display(a);
}

  