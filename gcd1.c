#include <stdio.h>

int gcd(int a, int b)
{
    int min = a < b ? a : b;
    for (int i = min; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }
    }
}

int main()
{
    int a, b;
    printf("insert a = ");
    scanf("%d", &a);
    printf("insert b = ");
    scanf("%d", &b);

    printf("GCD of (%d,%d) = %d " ,a,b,gcd(a, b));
    return 0;
}