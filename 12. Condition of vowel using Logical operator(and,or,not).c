#include <stdio.h>
int main()
{
    char l;
    printf("Enter any letter: ");
    scanf("%c", &l);

    if(l=='a'|| l=='e'|| l=='i'|| l=='o'|| l=='u'){
        printf("It's a vowel\n");
    }
    else if(l=='A'|| l=='E'|| l=='I'|| l=='O'|| l=='U'){
        printf("It's a vowel\n");
    }
    else{
        printf("It's a consonant\n");
    }

    return 0;
}
