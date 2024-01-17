#include <stdio.h>
#include <string.h>

int main()
{
    char a[10] = " Siyam";
    char b[10] = "WK";
    strcat (b, a);
    printf("%s, length %d", b, strlen(b));

    return 0;
}
