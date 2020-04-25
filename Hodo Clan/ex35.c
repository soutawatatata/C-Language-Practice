#include <stdio.h>

int main(void)
{
    double p;
    int y;

    printf("税抜き価格: >");
    scanf("%lf", &p);
    printf("年度: >");
    scanf("%d", &y);

    if (y <= 2019)
    {
        p *= 1.05;
        printf("税込価格は%.2f円です。\n", p);

    } else if (y >= 2020)
    {
        p *= 1.10;
        printf("税込価格は%.2f円です。\n", p);
    }


        return 0;
}