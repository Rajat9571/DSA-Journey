#include<iostream>
#include<vector>
using namespace std;
class Queue{
    public:
        vector<int>vec;
        int f;
        Queue(){
            f=0;
        }
        void push(int val){
            vec.push_back(val);
        }
        void pop(){
            if(f>=vec.size())
            {
                cout<<"Queue is empty"<<endl;
                return;
            }
            f++;
            
        }
        void front(){
             if(f>=vec.size())
            {
                cout<<"Queue is empty"<<endl;
                return;
            }
            cout<<vec[f]<<endl;
        }
        void rear(){
             if(f>=vec.size())
            {
                cout<<"Queue is empty"<<endl;
                return;
            }
            cout<<vec.back()<<endl;
        }
        void display(){
            for(int i=f;i<vec.size();i++){
                cout << vec[i] << " ";
            }
            cout<<endl;
        }
        int size(){
            return vec.size()-f;
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