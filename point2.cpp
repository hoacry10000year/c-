#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
void update(int *a, int *b)
{
    int c = *a;
    *a = *a + *b;
    *b = fabs(c - *b);
}
int main()
{
    int a, b;
    int *pa, *pb;
    pa = &a;
    pb = &b;
    cin >> a >> b;
    update(pa, pb);
    cout << a << endl;
    ;
    cout << b;
    return 0;
}
