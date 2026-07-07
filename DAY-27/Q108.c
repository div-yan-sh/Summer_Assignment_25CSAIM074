#include <stdio.h>

struct Marksheet {
    int roll_no;
    char name[50];
    float sub1, sub2, sub3, total, percentage;
    char grade;
};

int main() {
    struct Marksheet marks[100];
    int count = 0, choice, roll;

    while(1) {
        printf("\n--- Marksheet Generator ---");
        printf("\n1. Enter Marks\n2. Print Marksheet\n3. Exit\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Roll No: "); scanf("%d", &marks[count].roll_no);
                printf("Name: "); scanf(" %[^\n]s", marks[count].name);
                printf("Enter Marks for 3 Subjects: "); 
                scanf("%f %f %f", &marks[count].sub1, &marks[count].sub2, &marks[count].sub3);
                
                marks[count].total = marks[count].sub1 + marks[count].sub2 + marks[count].sub3;
                marks[count].percentage = marks[count].total / 3.0;
                
                if(marks[count].percentage >= 80) marks[count].grade = 'A';
                else if(marks[count].percentage >= 60) marks[count].grade = 'B';
                else if(marks[count].percentage >= 40) marks[count].grade = 'C';
                else marks[count].grade = 'F';
                count++;
                break;
            case 2:
                printf("Enter Roll No: "); scanf("%d", &roll);
                for(int i=0; i<count; i++) {
                    if(marks[i].roll_no == roll) {
                        printf("\n=== MARKSHEET ===\nName: %s\nTotal: %.2f\nPercentage: %.2f%%\nGrade: %c\n", 
                               marks[i].name, marks[i].total, marks[i].percentage, marks[i].grade);
                    }
                }
                break;
            case 3: return 0;
        }
    }
}
