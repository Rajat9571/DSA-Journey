#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"enter the string: ";
    getline(cin,str);
    int n=str.size();
    if((n%2)!=0)
    {
        cout<<"please enter the even number of string";
        return 1;
    }
    cout<<"string is "<<str<<endl;
    reverse(str.begin(),str.end()-n/2);
    cout<<"reversed string is: "<<str<<endl;
    return 0;
}