#include <stdio.h>

int main(void)
{
    int envelope = 8;
    int *mailbox = &envelope;

    printf("Address 1: %p\n", mailbox);
    printf("Address 2: %p\n", &envelope);
    printf("Envelope 1: %i\n", *mailbox);
    printf("Envelope 2: %i\n", envelope);
    printf("Envelope 3: %i\n", *&envelope);
    printf("Address of address: %p\n", &mailbox);
}