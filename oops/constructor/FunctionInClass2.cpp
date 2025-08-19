#include<iostream>
using namespace std;
class Cricketer{
    public:
        string name;
        int runs;
        float avg;
    Cricketer(string name,int runs,float avg)         //constructor(parameteriged)
    {
        this->name=name;
        this->runs=runs;
        this->avg=avg;
    }
    void print()                              //print function inside the class
    {
        cout<<"Name:"<<this->name<<endl;
        cout<<"Runs:"<<this->runs<<endl;
        cout<<"avg:"<<this->avg<<endl;
    }
    int matches()                              //2md function
    {
        return runs/avg;
    }
};
int main()
{
    Cricketer c1("virat kohli",25000,55.6);
    Cricketer c2("ROhit sharma",18000,46.6);
    c1.print();
    cout<<"Matches:"<<c1.matches()<<endl;
    cout<<endl;
    c2.print();
    cout<<"matches:"<<c2.matches()<<endl;
    return 0;
}