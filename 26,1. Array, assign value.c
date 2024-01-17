#include <stdio.h>

int main()
{
    int k[6]={2,5,7,9,12,13};

    int j;

    for(j=5; j>=0; j--){
        printf("%d\n", k[j]);
    }

    return 0;
}
