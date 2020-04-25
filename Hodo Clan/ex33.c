#include <stdio.h>

int main(void)
{
    int s;

    printf("得点を整数で入力してください > ");
    scanf("%d", &s);

    if (s >= 90)
    {
        printf("S");
    } else if (s >= 80)
    {
        printf("A");
    } else if(s >= 70)
    {
        printf("B");
    } else if(s >= 60)
    {
        printf("C");
    } else 
    {
        printf("お前はダメ人間か一握りの天才。");
    }
        return 0;
}