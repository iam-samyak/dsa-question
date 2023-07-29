#include <iostream>
using namespace std;

int kadanealgo(int arr[], int size)
{
    int sum = 0;
    int maxi = arr[0];

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        maxi = max(maxi, sum);
        if (maxi < 0)
            sum = 0;
    }

    return maxi;
}

int main()
{
    int arr[8] = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout << kadanealgo(arr, 8) << endl;
}