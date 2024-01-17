#include <stdio.h>

int main()
{
    int n,sum;
    for(n = 5,sum = 0; n <= 20; n = n + 5){
        sum = sum + n;
    }
    printf("Sum is %d\n", sum);
    return 0;
}
