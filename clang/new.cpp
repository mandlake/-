#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;


typedef struct Data
{
    char c; // 1
    int *numPtr; // 4
} Data;

int main()
{
    int num = 10;
    Data d1;
    Data *d2 = (Data *)malloc(sizeof(struct Data));

    d1.numPtr = &num;
    d2->numPtr = &num;

    cout << *d1.numPtr << " " <<  *d2->numPtr;

    free(d2);
    return 0;
}