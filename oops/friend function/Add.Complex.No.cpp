#include<iostream>
using namespace std;
class complex{
    int a,b;
    
public:
friend complex sumcomplex(complex o1,complex o2);
    void setnumber(int n1,int n2)
    {
        a=n1;
        b=n2;
    }
    void getsum()
    {
        cout<<"sum is "<<a<< "+" <<b<<"i"<<endl;
    }   
};

complex sumcomplex(complex o1,complex o2)
{
    complex o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main()
{
    complex sum;
    complex c1,c2;
    c1.setnumber(2,3);
    c2.setnumber(1,2);
    sum=sumcomplex(c1,c2);
    sum.getsum();
    return 0;
}