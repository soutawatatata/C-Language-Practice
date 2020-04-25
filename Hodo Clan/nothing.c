#include <stdio.h>

int main(void)
{

    char i;

    printf("入力 : ");
    scanf("%c", &i);

    while (i <= 26)
    {
        printf("%c \n", i += 4);
        
    }
        return 0;
}