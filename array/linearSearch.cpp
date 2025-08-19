#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int arr[]={1,2,3,4,5};
    bool flag=0;
    //flag=0 ,means not found.
    //flag=1 ,means number found.
    for(int i=0;i<5;i++)
    {
        if(arr[i]==n)
        {
            flag=1;
            break;
        }
  
    }
     if(flag)
        cout<<n<<" is found";
        else
        cout<<n<<" doesn't found";
        return 0;
}
    