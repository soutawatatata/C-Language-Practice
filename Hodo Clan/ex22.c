#include <stdio.h>

int main(void)
{
    int i;

    printf("年齢を入力してください。 >");
    scanf("%d", &i);

    if (i < 20)
    {
        printf("あなたは未成年です。 \n");
    } else
        printf("あなたは成人です。 \n");
        return 0;
}