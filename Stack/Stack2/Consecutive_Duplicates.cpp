#include<iostream>
#include<stack>
using namespace std;
string RemoveDuplicates(string s)
{
    stack<char>st;
    int i=0;
    while(i<s.size())
    {
        if(st.empty() || st.top()!=s[i])
        {
            st.push(s[i]);
        }
        i++;
    }
    string result = "";
    while (!st.empty()) {
        result = st.top() + result;  // Store characters in correct order
        st.pop();
    }
    return result;
}

int main()
{
    string s= "aaabbcddaabffg";
    cout<<"input: "<<s<<endl;
    s = RemoveDuplicates(s);
    cout<<"output: "<<s;
    
} 

