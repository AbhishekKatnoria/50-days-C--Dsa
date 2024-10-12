#include <iostream>
using namespace std;

void primeOrNonPrime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (n % i != 0)
        {
            cout << "Prime";
        }
        else
        {
            cout << "Non Prime";
        }
    }
    return ;
}

int main()
{
    int n;
    cin>>n;
    primeOrNonPrime(n);
}