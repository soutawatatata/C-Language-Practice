#include <stdio.h>

int is_prime(int);

int main(void)
{
    int n;
    
    printf("入力：");
    scanf("%d", &n);
    
    printf("%Dは", n);
    if (is_prime(n))
    {
        printf("素数です。\n");
    } else{
        printf("素数ではありません。\n");
    }

    return 0;

}

int is_prime(int a)
{

    int f = 1;
    int i;

    for (i = 2; i < a; ++i)
    {
        if (a % i == 0)
        {
            f = 0;
            break;
        }
    }

    return f;
}