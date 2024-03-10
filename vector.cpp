#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <sstream>

#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> arr;
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        /* code */
        cout << arr[i] << " ";
    }

    return 0;
}
