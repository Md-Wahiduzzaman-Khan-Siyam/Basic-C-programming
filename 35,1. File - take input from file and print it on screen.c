#include <stdio.h>

int main()
{
    FILE *input_file;

    input_file = fopen("wk.txt", "r");

    char input[50];

    fgets(input, 50, input_file);

    puts(input);

    return 0;
}
