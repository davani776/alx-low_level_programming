// A program that adds positive numbers
#include <stdio.h>
#include <stdlib.h>

// A function that converts a character to an integer
int char_to_int(char c)
{
    // Return the ASCII value of the character
    return (int) c;
}

int main(int argc, char *argv[])
{
    // Initialize the sum to zero
    int sum = 0;

    // Loop through the arguments
    for (int i = 1; i < argc; i++)
    {
        // Get the first character of the argument
        char c = argv[i][0];
        // Convert the character to an integer using char_to_int
        int n = char_to_int(c);
        // Check if the number is positive
        if (n > 0)
        {
            // Add the number to the sum
            sum += n;
        }
        else
        {
            // Print an error message and return 1
            printf("Error\n");
            return 1;
        }
    }

    // Print the result, followed by a new line
    printf("%d\n", sum);
    return 0;
}

