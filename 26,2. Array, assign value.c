#include <stdio.h>

int main()
{
    double marks[4] = {87.5,90,92,89.5};

    int roll;

    for(roll=1; roll<=4; roll++){
        printf("roll:%d ~ marks:%.1lf\n", roll, marks[roll-1]);
    }

    return 0;
}
