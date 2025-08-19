#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int>a{5,3,1,4,2};
    vector<int>a{5,30,1,-4,2};

    for(int i=1;i<a.size();i++)
   {
        int j=i;
        while(j>0 && a[j-1]>a[j])
        {
            swap(a[j],a[j-1]);
            j--;
        }
   }


    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}