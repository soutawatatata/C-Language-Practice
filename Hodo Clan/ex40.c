#include <stdio.h>

int main(void)
{

    int i;
    
    printf("正の整数を入力してください。 < ");
    scanf("%d", &i);

    while ( i <= 5)
    {
        printf("%d \n", ++i );
    }
        return 0;

        //前置のインクリメント＝入力した値から始まる
        //後置のインクリメント＝計算後の値から始まる
}