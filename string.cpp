#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string a = "abcd";
    string b = "ef";
    string c = a + b;
    cout << a.length() << " " << b.length() << endl;
    cout << c << endl;
    swap(a[0], b[0]);
    cout << a << " " << b;
    return 0;
}
