#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    vector<vector<int>> v;
    int row, column, val, q;
    cin >> row >> q;
    for (int i = 0; i < row; i++)
    {
        /* code */
        cin >> column;
        vector<int> p;
        for (int j = 0; j < column; j++)
        {
            /* code */
            cin >> val;
            p.push_back(val);
        }
        v.push_back(p);
    }
    for (int i = 0; i < q; i++)
    {
        int r, c;
        cin >> r >> c;
        cout << v[r][c] << endl;
        /* code */
    }

    // for (int i = 0; i < q; i++)
    // {
    //     /* code */
    //     int r, c;
    //     cin >> r >> c;
    //     for (int j = 0; j < v[i].size(); j++)
    //     {
    //         /* code */
    //     }
    //     cout << v[r][c] << " ";
    // }

    // for (auto q : v)
    // {
    //     for (auto it : q)
    //     {
    //         cout << it << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}
