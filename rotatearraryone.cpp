#include <iostream>
using namespace std;

int rotate(int arr[], int size)
{
    int x = arr[size - 1];
    for (int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = x;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    rotate(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}