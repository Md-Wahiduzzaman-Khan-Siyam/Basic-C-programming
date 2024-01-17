#include <stdio.h>

int main()
{
    char name[3][10];

    int ch;

    for(ch = 0; ch < 3; ch++){
        scanf("%s", name[ch]);
    }

    for(ch = 0; ch < 3; ch++){
        printf("%s\n", name[ch]);
    }

    return 0;
}
