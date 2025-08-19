#include<iostream>
using namespace std;
class Queue{
    public:
        int arr[5];
        int r;
        int f;
        int count;
        int n=5;
        Queue(){
            f=0;
            r=-1;
            count=0;
        }
        void push(int val){
            if(count == n)
            {
                cout<<"Queue is full"<<endl;
                return;
            }
            r++;
            r= r % n;
            arr[r]=val;
            count++;
        }
        void pop(){
            if(count == 0){
                cout<<"Queue is empty"<<endl;
                return ;
            }
            f++;
            f = f % n;
            count--;
        }
        void front(){
            if(count == 0){
                cout << "Queue is empty" << endl;
                return;
            }
            cout<<arr[f]<<endl;
        }
        void rear(){
            if(count == 0){
                cout << "Queue is empty" << endl;
                return;
            }
            cout<<arr[r]<<endl;
        }
        void display(){
            if(count == 0){
                cout<<"Queue is empty"<<endl;
                return;
            }
            for(int i=0;i<count;i++){
                cout << arr[(f + i) % n] << " ";
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
    que.front();
    que.rear();
    que.display();
    cout<<que.size()<<endl;
    que.pop();
    que.pop();
    que.pop();
    que.pop();
    que.pop();
    que.pop();
    que.display();
    cout<<que.size()<<endl;
    que.front();
    que.rear();
    que.push(50);
    que.front();
    que.rear();
    que.display();
    return 0;
}