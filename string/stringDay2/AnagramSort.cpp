#include<iostream>
#include<algorithm> 
using namespace std;
int main()
{
    string s="physicsWallah";
    string t="Wallahphysics";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t)
    {
        cout<<"Yes";
    }
    else cout<<"No";
    return 0;
}