#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // 1 23 456

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j > 0; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // A BC DEF
    // char ch = 'A';

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j > 0; j--)
    //     {
    //         cout << ch << " ";
    //         ch += 1;
    //     }
    //     cout << endl;
    // }

    // 1111 222 33 4

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << i + 1;
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }

        for (int j = i; j > 0; j--)
        {
            cout << j;
        }

        cout << endl;
    }
}