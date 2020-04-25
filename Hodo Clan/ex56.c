#include <stdio.h>

int myabs(int);

int main(void)
{
    int b;
    printf("入力値の絶対値は%dです。", myabs(b));
    return 0;
}

int myabs(int a)
{
    int b;

    printf("入力：");
    scanf("%d", &a);

    if (a < 0)
    {
        b = a + a * -2;

    } else 
    {
        b = a;
    }
    return b;
    
}