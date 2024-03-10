#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int i;
    cout << " Nhap i: ";
    cin >> i;
    string arr[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (i > 9)
    {
        if (i % 2 == 0)
        {
            cout << "even";
        }
        else
        {
            cout << "odd";
        }
    }
    else
    {
        cout << arr[i - 1];
    }
    return 0;
}
