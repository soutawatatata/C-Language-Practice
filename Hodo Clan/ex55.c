#include <stdio.h>


int plus5(int);

int main(void)
{
    int b;

    printf("入力した整数に5を足すと%dになります。\n", plus5(b));
    return 0;
}

int plus5(int a)
{
    int b;
    

    printf("整数入力：");
    scanf("%d", &a);

    b = a + 5;
    return b;

}