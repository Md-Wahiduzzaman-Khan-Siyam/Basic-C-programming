#include <stdio.h>

int main()
{
    FILE *output_file;

    output_file = fopen("wk.txt", "w");

    char input[30];

    gets(input);

    fputs(input, output_file);

    return 0;

}
