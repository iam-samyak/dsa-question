#include <iostream>
using namespace std;

int rearrange(int arr[], int size)
{
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}

int printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {-4, -56, 96, 10, -1, 0};

    rearrange(arr, 6);

    printarr(arr, 6);

    return 0;
}