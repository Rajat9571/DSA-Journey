#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
int main()
{
    string str="raghav is a maths teacher.he is a DSA mentor as well";
    stringstream ss(str);
    string temp;
    vector<string>v;
    while(ss>>temp)
    {
        v.push_back(temp);
    }

    //print string

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //sort the string 

    sort(v.begin(),v.end());

    //print string after sorting

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int maxcount=1;
    int count=1;

    //counting the words that comes maximum times in sentence

    for(int i=1;i<v.size();i++)
    {
        if(v[i]==v[i-1])
        {  
            count++;
        }
        else
        count=1;
        maxcount=max(maxcount,count);
    }

    //printing words with number of times that words came maximum times.

    for(int i=1;i<v.size();i++)
    {
        if(v[i]==v[i-1])
        {
            count++;
        }
        else 
        count=1;
        if(count==maxcount)
        {
            cout<<v[i]<<" comes "<<maxcount<<" times "<<endl;
        }
    }
    return 0;
}

//explanation
/* 1)sabse pahle ek string banayege jisme ek sentence ko lihege(as a input ki trh aur direct koi sa bhi)
   2)phir ek stringstream bnayege ss name ka jo pure sentence ko divide krega 1-1 words.
   3)is single single word ko as a single character vector v me push_back kege mtlb dalege.
   4)is vector ko print kr skte ho dekhne ke liye,it is optional step.
   5)after that vector ko sort kr dege as sort(v.begin(),v.end()).
   6)waps se print krke dekhege ki vector string array me kya change hua hai(optional steps).
   7)count=1 and maxcount=1 se initialise krege
   8)counting the word step = i)isme vector v ko initialise krege 1 se and last step tk jyege.
                             ii)phir dekhege ki present position ka word last position se same hai ya nhi as(v[i]==v[i-1]).
                            iii)agar equal hai to count++ kr dege aur nhi equal hai to loop se bahar aakr bapas count ko 1 kr dege.
                             iv)jb equal hai to count ka value badha to iska value maxcount me add krege agar count ka value maxcount 
                                se bada hai as maxcount=max(maxcount,count) ,isme count maxcount ke previous value se compare kr rha hai
                              v)ise kya hoga ki iske baad ble steps me imagine krogi count ka value phle ble se jyada aya mtlb ki 
                                present bla word jda time aaya pichle ble to maxcount me ye bla count value store ho jyega as max(maxcount,count)
                                maxcount ka value pichla bla aur count ka value present bla.
   9)counting the word with name=
                            i)bapas se vector v initialise krege 
                           ii)isme agar count ka value maxcount(pichle bla step se) equal hai(count==maxcount) to phir maxcount aur count ke 
                              value(v[i]) ko print kr dege.
                                
*/