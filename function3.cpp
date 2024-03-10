#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sum(int a, int b, int c, int d);
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << sum(a, b, c, d);
    return 0;
}
int sum(int a, int b, int c, int d)
{
    int sum = 0;
    sum = a + b + c + d;
    return sum;
}
