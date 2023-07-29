#include <iostream>
using namespace std;

int sumArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[6] = {5, 9, 18, 45, -7, 0};

    cout << "the sum of array is " << sumArray(arr, 6);
}