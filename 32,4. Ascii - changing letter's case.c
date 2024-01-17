#include <stdio.h>

int main()
{
    char ch = 't';
    char capital = ch - 'n' + 'N';
    printf("The capital of %c is %c", ch, capital);

    return 0;
}
