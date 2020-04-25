#include <stdio.h>

int main(void)
{
        int i;
    
    printf("正の整数（初期値）入力してください。 < ");
    scanf("%d", &i);

    while ( i >= 1 )
    {
        if ( i % 3 == 0)
        {
                printf("%d \n", i);
        } 
        --i;
    }
        return 0;
}
