#include <stdio.h>

struct Record {
    char name[10];
    char mobile[15];
    char email[15];
};

int main()
{
    struct Record a;
    printf("Enter name: ");
    scanf("%s", &a.name);
    printf("Enter Mobile no: ");
    scanf("%s", &a.mobile);
    printf("Enter email: ");
    scanf("%s", &a.email);

    printf("Name: %s, Mobile no: %s, Email: %s", a.name, a.mobile, a.email);

    return 0;

}
