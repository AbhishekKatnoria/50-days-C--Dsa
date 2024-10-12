#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int rem = n % 10;
        n /= 10;
        sum += rem;
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    cout << sumOfDigits(n);
}