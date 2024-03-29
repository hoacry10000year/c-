#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;
class Student
{
private:
    int age;
    string first_name;
    string last_name;
    int standard;

public:
    void set_age(int age)
    {
        this->age = age;
    }
    void set_first_name(string first_name)
    {
        this->first_name = first_name;
    }
    void set_last_name(string last_name)
    {
        this->last_name = last_name;
    }
    void set_standard(int standard)
    {
        this->standard = standard;
    }
    int get_age()
    {
        return age;
    }
    string get_first_name()
    {
        return first_name;
    }
    string get_last_name()
    {
        return last_name;
    }
    int get_standard()
    {
        return standard;
    }
    string to_string()
    {
        string str;
        stringstream s;
        s << age << "," << first_name << "," << last_name << "," << standard;
        s >> str;
        return str;
    }
};

int main()
{
    int age, standard;
    string first_name, last_name;
    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);


    cout << st.get_age() << endl;
    cout << st.get_first_name() << ", " << st.get_last_name() << endl;
    cout << st.get_standard() << endl;

    cout << endl;
    cout << st.to_string();
    return 0;
}
