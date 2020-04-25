#include <stdio.h>

int main(void)
{
    int day;

    printf("日を入力してください。(1-31)");
    scanf("%d", &day);

    if (day % 10 == 5)
    {
        printf("%dは特売日です。\n", day);
    } else {
        printf("%dは特売日じゃねえって。\n", day);
    }
        return 0;
}