#include <iostream>
#include <array>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int ksmallest(int arr[], int size, int key)
{
    sort(arr, arr + size);

    return arr[size - key];
}

int main()
{
    int arr[6] = {9, 25, 14, 18, -56, 87};
    cout << "kth element " << ksmallest(arr, 6, 1);
}