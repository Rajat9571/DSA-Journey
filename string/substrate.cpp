#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"enter the string: ";
    getline(cin,str);
    int n=str.size();
    if(n%2!=0)
    {
        cout<<"please enter the even number string";
        return 1;
    }
    cout<<"string is "<<str<<endl;
    cout<<"substrate: "<<str.substr(n/2)<<endl;
    return 0;
}