#include <stdio.h>

int main()
{
    char N;
    printf("Enter a digit: ");
    scanf("%c", &N);

    if(N >='0'&& N <='9'){
        printf("It's a digit\n");
    }
    else{
        printf("It's not a digit\n");
    }
    return 0;
}
