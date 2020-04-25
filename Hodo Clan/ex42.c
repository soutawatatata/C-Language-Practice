#include <stdio.h>

int main(void)
{
    int i = 100;

    while(1)
    {

        --i;

        if(i < 1)
        {
            break;
        }

        if(i % 3 == 0 || i % 5 == 0)
        {
            continue;
        }

        printf("%d \n", i);

    }
    printf("\n");

        return 0;
}