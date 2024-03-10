#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <sstream>

#include <algorithm>
using namespace std;
void loop(vector<int> v, int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << v[i] << " ";
    }
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, a;
    cin >> n;
    vector<int> v;
    vector<vector<int>> v1;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a;
        v.push_back(a);
    }
    for (auto q : v)
    {
        cout << q << " ";
    }
    // loop(v, n);
    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     cout << v[i] << " ";
    // }

    return 0;
}
