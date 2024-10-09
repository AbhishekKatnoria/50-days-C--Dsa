#include <iostream>
using namespace std;
int main()
{

    // Print 1 to n number
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << i << "\n";
    // }

    // Print even number 1 to n

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << "\n";
        }
    }
}