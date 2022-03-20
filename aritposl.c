#include <stdio.h>
#include <math.h>

int main()
{
    int a = 1;
    int n = 8; 
    int d = 2;
    int pole[n];
    pole[0] = a;
    for(int i = 1; i < n; i++)
    {
        pole[i] = d + pole[i - 1];
    printf("%d|", pole[i]);
    }
    return 0;
}
