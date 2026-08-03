#include <bits/stdc++.h>
using namespace std;
inline int add(int a, int b)
{
    return a + b;
}
int multiply(int a, int b = 2)
{
    return a * b;
}
int subtract(int a, int b)
{
    return a - b;
}
float subtract(float a, float b)
{
    return a - b;
}
int main()
{
    int x = 20, y = 10;
    cout <<"Addition:"<<add(x, y)<<endl;
    cout <<"Multiplication(default argument):"<< multiply(x) << endl;
    cout <<"Multiplication(two arguments):"<< multiply(x, y) << endl;
    cout <<"Subtraction(int):"<< subtract(x, y) << endl;
    cout <<"Subtraction(float):"<< subtract(20.5f, 10.2f) << endl;
    return 0;
}