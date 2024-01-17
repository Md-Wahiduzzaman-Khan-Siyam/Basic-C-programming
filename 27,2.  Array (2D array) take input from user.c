#include<stdio.h>
int main()
{
    double maths[2][4];

    int c,r;

    for(c=0; c<2; c++){
        for(r=0; r<4; r++){
            scanf("%lf", &maths[c][r]);
        }
    }

    for(c=0; c<2; c++){
        for(r=0; r<4; r++){
            printf("class %d: roll %d: maths %.2lf\n", c+7, r+1, maths[c][r]);
        }
    }
    return 0;
}
