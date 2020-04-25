#include <stdio.h>

int main(void)
{
    int y;
    int h;

    printf("年齢： > ");
    scanf("%d", &y);
    printf("身長： > ");
    scanf("%d", &h);

    if (y >= 8 || !(y < 6 || h < 120))
    {
        printf("ジェットコースター乗れるで。\n");
    } else{
        printf("すまんな。君に用はない。帰れ。\n");
    }

        return 0;
}