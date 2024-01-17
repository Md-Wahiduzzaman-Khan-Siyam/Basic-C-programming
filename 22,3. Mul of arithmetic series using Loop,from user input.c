#include <stdio.h>

int main()
{
    int s,mul,start,dif,end;
    printf("Starting number, Difference, Ending number\n");
    scanf("%d%d%d", &start, &dif, &end);

    for(s = start, mul = 1; s<=end; s = s + dif ){
        mul = mul * s;
    }
    printf("Multiplication of the arithmetic series is %d\n", mul);
    return 0;
}

