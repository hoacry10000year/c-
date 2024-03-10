#include <iostream>
#include <cstdio>
using namespace std;
void check(int i)
{
    string arr[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (i > 9)
    {
        if (i % 2 == 0)
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
    }
    else
    {
        cout << arr[i - 1] << endl;
    }
}
int main()
{
    // Complete the code.
    int a, b;
    cout << "Nhap cac gia tri: ";
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        check(i);
    }
    return 0;
}
