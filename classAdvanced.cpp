#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <cassert>
using namespace std;
class Student
{
private:
    int marks[5];

public:
    void input()
    {
        for (int i = 0; i < 5; i++)
        {
            /* code */
            cin >> marks[i];
        }
    }
    int calculateTotalScore()
    {
        int total = 0;
        return accumulate(marks, marks + 5, total);
    }
    // void output()
    // {
    //     for (int i = 0; i < 5; i++)
    //     {
    //         /* code */
    //         cout << marks[i] << " ";
    //     }
    // }
};

int main()
{
    int n;
    int count = 0;
    cin >> n;
    Student *s = new Student[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        s[i].input();
    }
    int kristen_score = s[0].calculateTotalScore();
    for (int i = 1; i < n; i++)
    {
        int total = s[i].calculateTotalScore();
        if (total > kristen_score)
        {
            count++;
        }
        /* code */
    }
    cout << count;
    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     s[i].output();
    //     cout << endl;
    // }

    return 0;
}
