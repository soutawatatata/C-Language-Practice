#include <stdio.h>

int main(void)
{

    int i;
    int c;

    for (i = 1, c = 0; i <= 100; ++i)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            ++c;
        }
    }
    
    printf("1から100のうち、3の倍数か5の倍数である数は%d個です。\n", c);

    
    return 0;
}