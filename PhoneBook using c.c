#include <stdio.h>

int main(){
    char n[50];
    int a;
    int p;
    int d;
    char add[50];

    char na[50];
    int age;
    int ph;
    int da;
    char addr[50];

    printf("WELCOME TO PHONE BOOK\n\n");
    printf("MENU\n\n");
    printf("Press 1 to add the contact\n\n");

    int x;
    printf("Enter: ");
    scanf("%d", &x);

    if (x == 1) {
        int y;
        printf("Enter the number of contacts to be added: ");
        scanf("%d", &y);

        if (y == 1) {
            printf("Name: ");
            scanf("%s", n);  // No & needed
            printf("Age: ");
            scanf("%d", &a);
            printf("Phone Number: ");
            scanf("%d", &p);
            printf("Date Of Birth: ");
            scanf("%d", &d);
            printf("Address: ");
            scanf("%s", add);  // Changed %d to %s
        }
        if (y == 2) {
            printf("-----------------\n");
            printf("Name: ");
            scanf("%s", n);
            printf("Age: ");
            scanf("%d", &a);
            printf("Phone Number: ");
            scanf("%d", &p);
            printf("Date Of Birth: ");
            scanf("%d", &d);
            printf("Address: ");
            scanf("%s", add);
            printf("------------------\n");

            printf("-----------------\n");
            printf("Name: ");
            scanf("%s", na);
            printf("Age: ");
            scanf("%d", &age);  // Corrected variable
            printf("Phone Number: ");
            scanf("%d", &ph);  // Corrected variable
            printf("Date Of Birth: ");
            scanf("%d", &da);  // Corrected variable
            printf("Address: ");
            scanf("%s", addr);
            printf("-----------------\n");
        }

        printf("Press 2 to see the entered contact:\n");
        printf("Press 3 to exit from the phone Book:\n");

        int z;
        printf("Enter: ");
        scanf("%d", &z);

        if (z == 2) {
            int num;
            printf("Enter the number of contacts to be viewed: ");
            scanf("%d", &num);

            if (num == 1) {
                printf("Name: %s\n", n);
                printf("Age: %d\n", a);
                printf("Phone Number: %d\n", p);
                printf("Date Of Birth: %d\n", d);
                printf("Address: %s\n", add);
            } else if (num == 2) {
                printf("-----------------\n");
                printf("Name: %s\n", n);
                printf("Age: %d\n", a);
                printf("Phone Number: %d\n", p);
                printf("Date Of Birth: %d\n", d);
                printf("Address: %s\n", add);
                printf("------------------\n");

                printf("-----------------\n");
                printf("Name: %s\n", na);
                printf("Age: %d\n", age);
                printf("Phone Number: %d\n", ph);
                printf("Date Of Birth: %d\n", da);
                printf("Address: %s\n", addr);
                printf("-----------------\n");
            }
        } else if (z == 3) {
            printf("Are you sure you want to close the phone book?\n");
            printf("Press 1 for yes\n");
            printf("Press 2 for no\n");

            int ans;
            printf("Enter: ");
            scanf("%d", &ans);

            if (ans == 1) {
                printf("The Phone book has closed\n");
                printf("Have a nice day\n");
            } else if (ans == 2) {
                printf("The Phone book has not closed\n");
                printf("You can continue now\n");
            }
        }
    } else {
        printf("Invalid input\n");
    }

    return 0;
}

