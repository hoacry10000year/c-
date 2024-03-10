#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // add //
    // int **v = new int *[n];
    int n, q;
    cout << "Nhap n va q:";
    cin >> n >> q;
    int **a = new int *[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        int n1;
        cout << "Nhap n1:";
        cin >> n1;
        a[i] = new int[n1];
        for (int j = 0; j < n1; j++)
        {
            cout << "a[" << i << "]"
                 << "[" << j << "]"
                 << ":";
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < q; i++)
    {
        /* code */
        int r, c;
        cin >> r >> c;
        cout << a[r][c];
    }

    return 0;
}
