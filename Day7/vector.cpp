#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    for (int i:arr)
    {
        cout << i << " ";
    }

    arr.push_back(12);
    arr.push_back(13);
    arr.push_back(14);

     for (int i:arr)
    {
        cout << i << " ";
    }
    arr.pop_back();
     for (int i:arr)
    {
        cout << i << " ";
    }


}