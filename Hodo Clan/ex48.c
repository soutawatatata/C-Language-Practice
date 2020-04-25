#include <stdio.h>
#include <math.h>

int main(void)
{

    double c;

    printf("正の数：");
    scanf("%lf", &c);

    printf("%.2fの平方根は%.2fです。", c, sqrt(c));
    
    return 0;
}