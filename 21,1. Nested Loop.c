#include <stdio.h>

int main()
{
    int n,m;
    for(n = 1; n < 5; n++ ){
        for(m = 0; m <= 2; m = m + 1){
            printf("n = %d, m = %d\n", n,m);
        }
    }
    return 0;
}
