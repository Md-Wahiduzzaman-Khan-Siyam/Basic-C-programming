#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    printf("Enter the value of x\n");
    scanf("%d", &x);
    printf("Enter the value of y\n");
    scanf("%d", &y);
    z = x + y;
    printf("The value of %d + %d equals %d\n", x, y, z);
    return 0;
}
