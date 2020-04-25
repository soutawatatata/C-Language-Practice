#include <stdio.h>
#include <math.h>
int main(void)
{
    double x;
    double y;

    printf("数字Xを入力：");
    scanf("%lf", &x);

    printf("数字Yを入力：");
    scanf("%lf", &y);

    printf("数字%.2fの%.2f乗は%.2fです。\n", x, y, pow(x, y));

        return 0;
}