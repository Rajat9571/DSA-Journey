#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a{5, 3, 1, 4, 2};

    //selection sort
    for (int i = 0; i < a.size() - 1; i++)
    {
        int smallest = i;
        {
            for (int j = i + 1; j < a.size(); j++)
            {
                if (a[j] < a[smallest])
                {
                    smallest = j;
                }
            }
        }
        swap(a[i], a[smallest]);
    }

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}


