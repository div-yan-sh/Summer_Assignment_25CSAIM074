#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    int age;
    char course[30];
};

int main() {
    struct Student students[100];
    int count = 0, choice, search_roll, found;

    while(1) {
        printf("\n--- Student Record Management ---");
        printf("\n1. Add Student\n2. View All Students\n3. Delete Student\n4. Exit\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Roll No: "); 
                scanf("%d", &students[count].roll_no);
                printf("Enter Name: "); 
                scanf(" %[^\n]s", students[count].name);
                printf("Enter Age: "); 
                scanf("%d", &students[count].age);
                printf("Enter Course: "); 
                scanf(" %[^\n]s", students[count].course);
                count++;
                printf("Record added successfully!\n");
                break;
            case 2:
                if(count == 0) 
                    printf("No records found.\n");
                for(int i=0; i<count; i++) {
                    printf("Roll: %d | Name: %s | Age: %d | Course: %s\n", 
                           students[i].roll_no, students[i].name, students[i].age, students[i].course);
                }
                break;
            case 3:
                printf("Enter Roll No to delete: "); 
                scanf("%d", &search_roll);
                found = 0;
                for(int i=0; i<count; i++) {
                    if(students[i].roll_no == search_roll) {
                        for(int j=i; j<count-1; j++) students[j] = students[j+1];
                        count--; found = 1;
                        printf("Record deleted.\n"); break;
                    }
                }
                if(!found) printf("Record not found.\n");
                break;
            case 4: 
                return 0;
            default: 
                printf("Invalid choice!\n");
        }
    }
}
