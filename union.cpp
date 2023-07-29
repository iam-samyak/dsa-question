#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int doUnion(int arr[], int m, int brr[], int n)
{
    vector<int> s;
    for (int i = 0; i < m; i++)
    {
        s.push_back(arr[i]);
    }
    for (int j = 0; j < n; j++)
    {
        s.push_back(brr[j]);
    }

    sort(s.begin(), s.end());

    int c = 0;
    for (int p = 0; p < s.size(); p++)
    {
        if (s[p] != s[p + 1])
            c++;
    }
    // cout << s[7];
    return c;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[3] = {1, 2, 3};

    cout << doUnion(arr, 5, brr, 3) << endl;
}