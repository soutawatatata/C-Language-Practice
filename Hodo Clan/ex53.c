#include <stdio.h>

double expo(double a, double b)
{
    double c;
    
    for (c = 1; b > 0; --b)
    {
        c *= a;
    }

    return c;
}

int main(void)
{

    printf("-2.7の3乗は、%.2fです。\n", expo(-2.7, 3));
    printf("1.8の4乗は、%.2fです。\n", expo(1.8, 4));

    return 0;
}