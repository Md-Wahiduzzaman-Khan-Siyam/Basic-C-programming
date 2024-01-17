#include <stdio.h>

int main()
{
    char string[30];
    gets(string);

    int i, length = 0;

    for(i = 0; string[i] != '\0' ; i++){
        length = length + 1;
    }

    printf("length of %s is %d\n", string, length);

    return 0;
}
