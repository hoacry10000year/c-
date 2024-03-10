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
    int n, val;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        v.push_back(val);
        /* code */
    }
    int q;
    cin >> q;
    v.erase(v.begin() + q - 1);
    int a, b;
    cin >> a >> b;
    v.erase(v.begin() + a - 1, v.begin() + b - 1);

    cout << v.size() << endl;
    for (auto q : v)
    {
        cout << q << " ";
    }

    return 0;
}
