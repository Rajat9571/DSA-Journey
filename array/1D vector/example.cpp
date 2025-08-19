#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int> >arr; //initialized 2D vector.
    
    //giving element in array a,b & c.
    vector<int> a{1,2,3,4,5};
    vector<int> b={2,3,5};
    vector<int> c={1,3,5,6};
    
    //giving element of array a,b,c to array arr.
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
   
    
    //printing 2D array.
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}