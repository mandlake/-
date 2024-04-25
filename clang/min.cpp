#include <iostream>
#include <cstdio>

void gin_min()
{
    int num[5] = {70, 60, 55, 90, 85};
    int min = 9999;
    for(int i = 0; i < 5; i++)
    {
        if(min > num[i])
        {
            min = num[i];
        }
    }
    printf("%d", min);
}

int main()
{
    gin_min();
    return 0;
}