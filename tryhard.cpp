#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        int colum;
        cin >> colum;
        arr[i] = new int[colum];
        for (int j = 0; j < colum; j++)
        {
            cin >> arr[i][j];
        }
    }

    return 0;
}
