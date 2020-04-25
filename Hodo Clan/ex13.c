#include <stdio.h>

int main(void)
{
    int weight;
    int height;

    printf("身長を入力してください（cm）>");
    scanf("%d", &weight);
    printf("体重を入力してください（kg）>");
    scanf("%d", &height);

	printf("BMIは %dです。\n", (int)(double)weight / ((height * height) * 100));

    return 0;

}