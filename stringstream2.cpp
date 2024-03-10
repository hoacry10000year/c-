#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;
vector<int> pareInts(string str)
{
    vector<int> v;
    stringstream s(str);
    int i;
    char c;
    // while (s >> i)
    // {
    //     v.push_back(i);
    //     s >> c;
    // }
    // for (int j = 0; j < s.size(); j++)
    // {
    //     /* code */
    //     v.push_back(i);
    //     s >> c;
    // }

    return v;
}
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string str = "26,5,3";
    vector<int> integers = pareInts(str);
    cout << integers[0];
    return 0;
}
