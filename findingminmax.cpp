#include <iostream>
using namespace std;

struct Compare
{
    int min;
    int max;
};

Compare getminmax(int arr[], int size)
{
    struct Compare minmax;

    if (size == 1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
        return minmax;
    }
    if (arr[0] > arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }

    for (int i = 2; i < size; i++)
    {
        if (arr[i] > minmax.max)
        {
            minmax.max = arr[i];
        }
        else if (arr[i] < minmax.min)
        {
            minmax.min = arr[i];
        }
    }
    return minmax;
}

int main()
{
    int arr[6] = {1, 78, 25, 12, -12, 18};

    struct Compare minmax = getminmax(arr, 6);

    cout << "maximum " << minmax.max << endl;
    cout << "minimum " << minmax.min << endl;
    return 0;
}