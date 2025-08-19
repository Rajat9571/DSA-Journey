#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;

    //insertion
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    //size
    cout<<"Size of queue is "<<q.size()<<endl;

    //deletion
    q.pop();
    cout<<"Size of queue after pop is "<<q.size()<<endl;

    //printing front
    cout<<"Front element is "<<q.front()<<endl;

    //printing back
    cout<<"Back element is "<<q.back()<<endl;

    //pring the queue
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}