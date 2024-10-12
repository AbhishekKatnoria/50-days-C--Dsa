#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 2; i <= n; i++)
    {
        int temp = a + b;
        cout << temp << " ";
        a = b;
        b = temp;
    }
}

int main()
{
    int n;
    cin >> n;
    fibonacci(n);
}