#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter the value of a, b & c\n");
	scanf("%d%d%d", &a, &b, &c);

	if(a>b){
        printf("%d is the largest number", a);
	}
	else if(b>c){
        printf("%d is the largest number", b);
	}
	else{
        printf("%d is the largest number", c);
	}

	return 0;
}
