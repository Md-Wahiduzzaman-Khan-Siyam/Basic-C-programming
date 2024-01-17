#include <stdio.h>

int main()
{
    int marks;
    char G, o;
    printf("Enter Your marks: ");
    scanf("%d", &marks);

    if(marks >=80){
        G = 'A';
        o = '+';
        printf("Your Grade is %c%c\n", G, o);
    }
    else if(marks >=70){
        G = 'A';
        printf("Your Grade is %c\n", G);
    }
    else if(marks >=60){
        G = 'A';
        o = '-';
        printf("Your Grade is %c%c\n", G, o);
    }
    else if(marks >=50){
        G = 'B';
        printf("Your Grade is %c\n", G);
    }
    else if(marks >=40){
        G = 'C';
        printf("Your Grade is %c\n", G);
    }
    else{
        printf("Your Grade is F\n");
    }
    return 0;
}
