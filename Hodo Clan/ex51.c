#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char a;

    printf("文字を入力してください：");
    scanf("%c", &a);

    printf("%c \n", toupper(a));
        return 0;
}