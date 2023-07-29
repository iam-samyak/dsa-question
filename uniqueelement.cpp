#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int uniqueelement(int arr[], int size)
{
    int a = 0;
    for (int i = 0; i < size; i++)
    {
        a = a ^ arr[i];
    }
    return a;
}

int main()
{
    int arr[9] = {2, 3, 4, 5, 45, 2, 3, 4, 5};

    cout << uniqueelement(arr, 9);
}