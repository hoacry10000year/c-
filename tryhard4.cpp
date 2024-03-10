#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;
vector<int> pareInts(string str)
{
    vector<int> p;
    int i;
    char c;
    stringstream s(str);
    while (s >> i)
    {
        p.push_back(i);
        s >> c;
    }
    return p;
}
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string str = "23,4,56";
    vector<int> v;
    v = pareInts(str);
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout << v[i] << endl;
    }

    return 0;
}
