#include <stdio.h>

int main(void)
{
    int age;
    int employed;

    printf("年齢を入力してください >");
    scanf("%d", &age);
    printf("あなたは働いていますか？ Yes:1, No:0 >");
    scanf("%d", &employed);

    if (!(age < 22 && employed == 1))
    {
        printf("いい歳こいて何してんだ働け馬鹿野郎。 \n");
    }

        return 0;
}