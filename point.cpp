#include <iostream>
#include <cstdio>
using namespace std;
// void increment(int *v);
// void update(int *a, int *b)
// {
//     int c = *a;
//     int *a =
// }
int main()
{
    int a = 5;
    int *c = &a;
    int **d = &c;
    cout << &a << endl;
    cout << c << endl;
    cout << *c << endl;
    cout << &c << endl;
    cout << d << endl;
    cout << **d;

    return 0;
}
// void increment(int *v)
// {
//     (*v) += 2;
// }
