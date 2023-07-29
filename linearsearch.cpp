#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return 1;
    }
    return 0;
}

int main()
{
    int arr[5] = {2, 18, -5, 1, 0};
    cout << "Enter element to seaerch" << endl;
    int key;
    cin >> key;

    bool found = search(arr, 5, key);
    if (found)
    {
        cout << "Key found" << endl;
    }
    else
    {
        cout << "key not found" << endl;
    }
}