#include <stdio.h>

struct Record{
    char name[10];
    char mobile[15];
    char email[15];
};

int main()
{
    struct Record a[2];

    int i;

    for(i = 0; i < 2; i++){
        printf("Enter the name: ");
        scanf("%s", a[i].name);
        printf("Enter mobile no: ");
        scanf("%s", a[i].mobile);
        printf("Enter email: ");
        scanf("%s", a[i].email);
    }

    for(i=0; i < 2; i++){
        printf("Name : %s, Mobile no: %s, Email: %s\n", a[i].name, a[i].mobile, a[i].email);
    }

    return 0;
}
