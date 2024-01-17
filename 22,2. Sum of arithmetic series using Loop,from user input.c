#include <stdio.h>

int main()
{
    int n,start,dif,sum,end;

    printf("starting number, difference, ending number\n");

    scanf("%d%d%d", &start, &dif, &end);

    for(n = start, sum = 0; n <= end; n = n + dif){
        sum = sum + n;
    }

    printf("Sum is %d", sum);

    return 0;
}
