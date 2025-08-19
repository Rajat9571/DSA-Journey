#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollno;
    int grade;
    double cgpa;
};
 void print(Student s)
    {
        cout<<"Name:"<<s.name<<endl;
        cout<<"Roll No:"<<s.rollno<<endl;
        cout<<"Grade:"<<s.grade<<endl;
        cout<<"cgpa:"<<s.cgpa<<endl;
    }
int main()
{
    Student s1;
    s1.name="Rajat Kumar";
    s1.rollno=74;
    s1.grade=4;
    s1.cgpa=8.2;
    print(s1);
    cout<<endl;
    Student s2;
    s2.name="Meghashree RA";
    s2.rollno=61;
    s2.grade=8;
    s2.cgpa=7.8;
    print(s2);

    return 0;
    
}