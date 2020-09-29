#include <stdio.h>

int main(void)
{
    int i = -5;
    if (i)
    {
        printf("entered conditional\n");
    }
    i = 5;

    while(i)
    {
        printf("hello\n");
        i--;
    }
    printf("done\n");
}