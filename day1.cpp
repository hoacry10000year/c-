#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;
    cout << "Nhap cac gia tri: ";
    cin >> a >> b >> c >> d >> e;
    cout << a << endl;
    cout << fixed << setprecision(0) << b << endl;
    cout << c << endl;
    cout << fixed << setprecision(0) << d << endl;
    cout << fixed << setprecision(0) << e;
    return 0;
}
