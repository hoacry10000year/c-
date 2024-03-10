#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> v;
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
        /* code */
    }

    // int r = lower_bound(v.begin(), v.end(), 4) - v.begin();
    int q, num;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> num;
        int r = lower_bound(v.begin(), v.end(), num) - v.begin();
        if (v[r] == num)
        {
            cout << "Yes " << r + 1 << endl;
        }
        else
        {
            cout << "No " << r + 1 << endl;
            ;
        }
        /* code */
    }
    return 0;
}
