#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    char *s1 = get_string("s1: ");
    char *s2 = get_string("s2: ");
    printf("%lu\n", sizeof(s1));

    char *s3 = concatenate(s1, s2);
    printf("%s\n", s3);
    free(s3);
}

// TODO: Implement concatenate function