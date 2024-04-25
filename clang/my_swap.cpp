#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int swap(int a, int b)
{
    int number = a;
    a = b;
    b = number;
    cout << a << " " << b;
    return a, b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    swap(a, b);
}