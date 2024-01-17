#include <stdio.h>

int main()
{
    int n;
    for(n = 2; n <= 100; n = n + 2){
        if(n>=80){
            printf("%d\n", n);
        }
    }
    return 0;
}

