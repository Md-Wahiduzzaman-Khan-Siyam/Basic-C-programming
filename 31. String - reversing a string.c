#include <stdio.h>

int main()
{
    int i;
    char str[30] = {"BANGLA"};
    //scanf("%s", &str);

    for(i = 5; i >= 0; i--){
        printf("%c", str[i]);
    }
    return 0;
}
