#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int getmindiff(int arr[], int n, int k)
{
    sort(arr, arr + n);

    int ans = arr[n - 1] - arr[0];

    int smallest = arr[0] + k;
    int largest = arr[n - 1] - k;
    int mi, ma;

    for (int i = 0; i < n - 1; i++)
    {
        mi = min(smallest, arr[i + 1] - k);
        ma = max(largest, arr[i] + k);
        if (mi < 0)
            continue;
        ans = min(ans, ma - mi);
    }

    return ans;
}

int main()
{
    int arr[5] = {2, 9, 12, 10, 18};
    int k = 3;

    cout << getmindiff(arr, 5, k) << endl;
}