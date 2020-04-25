#include <stdio.h>

int main(void)
{
    int age;
    int gender;

    printf("年齢を入力してください > ");
    scanf("%d", &age);
    printf("性別を入力してください。(1:男, 0:女)");
    scanf("%d", &gender);

    if (age >= 38 && age <= 42 && gender == 1)
    {
        printf("お前は40前後のおじさんだ。\n");
    }
        return 0;
}