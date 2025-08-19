#include<iostream>
#include<stack>
using namespace std;
bool isBalanced(string s){
    if(s.length()%2!=0) return false;
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else{ //s[i]==')'
            if(st.size()==0) return false;   //this means is that stack size is empty because no '(' is stored in the stack if '(' available then it is not going to be empty.so no matching bracket so return false.
            else st.pop();   //this means is that stack size is not empty because '(' is stored in the stack so we pop the '(' from the stack because we have found the matching bracket.
        }
    }
    if(st.size()==0) return true;  //this means is that stack size is empty because all the '(' are matched with the ')' so no '(' is left in the stack.
    else return false;  //this means is that stack size is not empty because there is some '(' left in the stack so no matching bracket is found so return false.
}
int main()
{
    // string s= "()()()";
    string s= "()()()((";
    cout<<isBalanced(s);
    return 0;
}