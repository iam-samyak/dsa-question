#include <iostream>
using namespace std;

int countsetBit(int n)
{
    int count = 0;
    while (n)
    {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter number to check " << endl;
    cin >> n;

    if (countsetBit(n) == 1)
    {
        cout << "Yes it is!!" << endl;
    }
    else
    {
        cout << "No it's not" << endl;
    }
}