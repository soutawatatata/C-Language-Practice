#include <stdio.h>

int main(void)
{
    int a, b, c;
    int max;
    int min;

    printf("整数を3つ入力してください。 \n");
    printf("1つ目 > ");
    scanf("%d", &a);
    printf("2つ目 > ");
    scanf("%d", &b);
    printf("3つ目 > ");
    scanf("%d", &c);

    max = a;
    min = a;

    if (b > max)
    {
        max = b;
    }
    if( c > max)
    {
        max = c;
    }

    if (min > b)
    {
        min = b;
    }
    if(c < min)
    {
        min = c;
    } 

    printf("最大値は%d、最小値は%dです。", max, min);
    return 0;
}