#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char dept[30];
    char designation[30];
};

int main() {
    struct Employee emps[100];
    int count = 0, choice;

    while(1) {
        printf("\n--- Employee Management ---");
        printf("\n1. Add Employee\n2. Display Employees\n3. Exit\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter ID: "); scanf("%d", &emps[count].id);
                printf("Enter Name: "); scanf(" %[^\n]s", emps[count].name);
                printf("Enter Department: "); scanf(" %[^\n]s", emps[count].dept);
                printf("Enter Designation: "); scanf(" %[^\n]s", emps[count].designation);
                count++;
                break;
            case 2:
                for(int i=0; i<count; i++) {
                    printf("ID: %d | Name: %s | Dept: %s | Desg: %s\n", emps[i].id, emps[i].name, emps[i].dept, emps[i].designation);
                }
                break;
            case 3: return 0;
        }
    }
}
