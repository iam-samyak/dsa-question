#include <iostream>
using namespace std;

int jumpto(int arr[], int n)
{
    int step = arr[0];
    int maxReach = arr[0];
    int jump = 1;

    if (n <= 1)
        return 0;
    if (arr[0] == 0)
        return -1;
    for (int i = 1; i < n; i++)
    {
        if (i == n - 1)
            return jump;
        maxReach = max(maxReach, arr[i] + 1);
        step--;
        if (step == 0)
        {
            jump++;
            if (i >= maxReach)
                return -1;
            step = maxReach - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[6] = {1, 4, 3, 2, 6, 7};
    cout << jumpto(arr, 6) << endl;
}