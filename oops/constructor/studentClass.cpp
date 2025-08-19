#include<iostream>
using namespace std;
class Student{                               //class declaration
    public:
        string name;
        int rno;
        double cgpa;
        int grade;
    Student(string n,int r,double c,int g)     //constructor(parameterised)
    {
        name=n;
        rno=r;
        cgpa=c;
        grade=g;
    }
    Student(){                                 //constructor(default)

    }
};
 void print(Student s)                       //printing function
    {
        cout<<"Name:"<<s.name<<endl;
        cout<<"Roll No:"<<s.rno<<endl;
        cout<<"Cgpa:"<<s.cgpa<<endl;
        cout<<"Grade:"<<s.grade<<endl;
    }

 void change(Student &s)                      //changing function
    {
         s.name="Meghashree RA";
    }
int main()
    {
        Student s1("Rajat Kumar",74,8.2,10);     //constructor call
        print(s1);                               //print call
        change(s1);                              //change call
        cout<<endl;                              
        print(s1);                               //print after change
        cout<<endl;

        Student s2;
        s2.name="Ram kumar";
        s2.rno=44;
        s2.cgpa=9.2;
        s2.grade=9;
        print(s2);
        cout<<endl;
        Student s3(s1);    //  or Student s3=s1;   // copy constructor
        s3.name="srinivas";  //deep copy
        print(s3);
        return 0;
}