#include <iostream>
#include <array>
#include <bits/stdc++.h>

using namespace std;

bool uniqueOccarance(int arr[], int size)
{
    vector<int> index;
    sort(arr.begin(), arr.end());

    int count = 1;
    int c = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
        else
        {
            index.push_back(count);
            c++;
            count = 1;
        }
    }

    index.push_back(count);

    sort(index.begin(), index.end());

    for (int i = 1; i <= c; i++)
    {
        if (index[i] == index[i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[9] = {2, 3, 4, 5, 45, 2, 3, 4, 5};

    cout << uniqueOccarance(arr, 9);
}