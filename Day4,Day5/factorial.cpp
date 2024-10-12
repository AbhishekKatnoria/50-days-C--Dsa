#include <iostream>
using namespace std;

int factorial(int n)
{
  int fact = 1;
  for (int i = 1; i <= n; i++)
  {
    fact *= i;
  }
  return fact;
}

int nCr(int n, int r)
{
  int nfact = factorial(n);
  int rfact = factorial(r);
  int nrfact = factorial(n - r);
  return nfact / (rfact * nrfact);
}

int main()
{
  int n, r;
  cin >> n;
  cin >> r;
  cout << "Factorial = " << nCr(n, r);
}