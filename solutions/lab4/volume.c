// Demonstrates fread functionality, using starter code from volume.c
// NOTE: This is for demonstrative purposes. I make no claims about the quality
// or soundness of this code (like using an uint16_t buffer for an int read; definitely bad)

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Number of bytes in .wav header
const int HEADER_SIZE = 44;

int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    // Open files and determine scaling factor
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    float factor = atof(argv[3]);

    // What does fread return? Number of bytes or number of blocks?
    long amount_read;
    int16_t buffer;
    amount_read = fread(&buffer, sizeof(int16_t), 1, input);
    printf("Amount read 1: %ld\n", amount_read);

    amount_read = fread(&buffer, sizeof(int16_t), 5, input);
    printf("Amount read 2: %ld\n", amount_read);

    amount_read = fread(&buffer, sizeof(int), 1, input);
    printf("Amount read 3: %ld\n", amount_read);

    amount_read = fread(&buffer, sizeof(int), 3, input);
    printf("Amount read 4: %ld\n", amount_read);

    // Close files
    fclose(input);
    fclose(output);
}
