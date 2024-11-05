#include <iostream>
using namespace std;
#include <climits>

int main()
{
  int arr[5] = {12, 10, 9, 8, 5};
  int small = INT_MAX;
  int max = INT_MIN;
  int a = 0;
  int b = 0;
  for (int i = 0; i < 5; i++)
  {
    if (arr[i] < small)
    {
      small = arr[i];
      a = i;
    }

    if (arr[i] > max)
    {
      max = arr[i];
      b = i;
    }
  }

  cout << a << " ";
  cout << b << " ";
  return 0;
}