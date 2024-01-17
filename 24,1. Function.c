#include <stdio.h>

int min(int x, int y)
{
    int num;

    if(x<y){
        num = x;
    }
    else{
        num = y;
    }

    return num;
}

int main()
{
    int a,b;
    int smaller = 0;

    printf("Enter the value of a and b\n");
    scanf("%d%d", &a, &b);

    smaller = min(a,b);

    printf("The smaller number is %d\n", smaller);

    return 0;
}
