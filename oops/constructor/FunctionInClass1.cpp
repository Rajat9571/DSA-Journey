#include<iostream>
using namespace std;
class Cricketer{
    public:
        string name;
        int runs;
        float avg;
    Cricketer(string n,int r,float a)         //constructor(parameteriged)
    {
        name=n;
        runs=r;
        avg=a;
    }
    void print()                              //print function inside the class
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Runs:"<<runs<<endl;
        cout<<"avg:"<<avg<<endl;
    }
};
int main()
{
    Cricketer c1("virat kohli",25000,55.6);
    Cricketer c2("ROhit sharma",18000,46.6);
    c1.print();
    cout<<endl;
    c2.print();
    return 0;
}