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
        cout << "Greather than 9";
    }
    else
    {
        cout << arr[i - 1];
    }
    // Complete the code.
    // int a;
    // cout << "Nhap cac gia tri: ";
    // cin >> a;
    // if (a > 9)
    // {
    //     cout << "Greater than 9";
    // }
    // else
    // {
    //     if (a == 1)
    //     {
    //         cout << "one";
    //     }
    //     else if (a == 2)
    //     {
    //         cout << "two";
    //     }
    //     else if (a == 3)
    //     {
    //         cout << "three";
    //     }
    //     else if (a == 4)
    //     {
    //         cout << "four";
    //     }
    //     else if (a == 6)
    //     {
    //         cout << "six";
    //     }
    //     else if (a == 7)
    //     {
    //         cout << "seven";
    //     }
    //     else if (a == 8)
    //     {
    //         cout << "eight";
    //     }
    //     else if (a == 9)
    //     {
    //         cout << "nine";
    //     }
    // }
    return 0;
}
