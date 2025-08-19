#include<iostream>
using namespace std;
class Cricketer{
    public:
        string name;
        int runs;
        Cricketer(string name,int runs)
        {
            this->name=name;       //this-> word
            this->runs=runs;
        }
};
void print(Cricketer c)
{
   cout<<"Name:"<<c.name<<endl;
   cout<<"Runs:"<<c.runs<<endl;
}
int main()
{
    Cricketer c1("virat kohli",25000);
    cout<<endl;
    Cricketer c2("Rohit sharma",18000);
    print(c1);
    cout<<endl;
    print(c2);
    return 0;
}