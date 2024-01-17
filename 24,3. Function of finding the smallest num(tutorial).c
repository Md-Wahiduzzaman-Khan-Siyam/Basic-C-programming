#include <stdio.h>

int min(int x, int y)
{
    int num;

    if(x<y){
        num = x;
    }
    else{
        num = y;
    }

    return num;
}

int main()
{
    int x,y,z;
    int t1, t2;

    printf("Enter the value of x and y\n");
    scanf("%d%d%d", &x, &y, &z);

    t1 = min(x,y);
    t2 = min(t1,z);

    printf("The smallest number is %d\n", t2);

    return 0;
}
