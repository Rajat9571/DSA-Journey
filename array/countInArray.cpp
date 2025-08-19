#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,0,1,1,1,0,0};
    int size=7;
    int NumOfZeros=0;
    int NumOfOnes=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        NumOfZeros= NumOfZeros+1;
        else
        NumOfOnes= NumOfOnes+1;
    }
    cout<<"NumOfZeros="<<NumOfZeros<<endl;
    cout<<"NumOfOnes="<<NumOfOnes;
    return 0;
}