#include <stdio.h>

struct Record{
    char name[10];
    char mobile[15];
    char email[15];
};

int main()
{
    struct Record a, b;
    printf("Enter the name: ");
    scanf("%s", &a.name);
    printf("Enter mobile no: ");
    scanf("%s", &a.mobile);
    printf("Enter email: ");
    scanf("%s", &a.email);

    b = a;

    printf("Name : %s, Mobile no: %s, Email: %s", b.name, b.mobile, b.email);

    return 0;
}
