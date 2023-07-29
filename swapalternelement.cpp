#include <iostream>
using namespace std;

swapArray(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {5, 9, 18, 3, 45, -2};
    int brr[5] = {1, 0, 58, 12, -8};

    swapArray(arr, 6);
    swapArray(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);
}