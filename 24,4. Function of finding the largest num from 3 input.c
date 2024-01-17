#include <stdio.h>

int max(int i, int j, int k)
{
    int m;

    if(i>j){
        m = i;
    }
    else if(j>k){
        m = j;
    }
    else{
        m = k;
    }

    return m;
}

int main()
{
    int i,j,k;
    int largest =0;

    printf("Enter the value of i, j & k\n");
    scanf("%d%d%d", &i, &j, &k);

    largest = max(i,j,k);

    printf("The largest value is %d\n", largest);

    return 0;
}

