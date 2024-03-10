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
    string str = "sadasd asdas asd";
    std::stringstream s(str);
    string w;
    int count = 0;
    while (s >> w)
    {
        count++;
    }
    cout << count;
    return 0;
}
