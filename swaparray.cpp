#include <iostream>
using namespace std;

reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
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

    reverseArray(arr, 6);
    reverseArray(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);
}