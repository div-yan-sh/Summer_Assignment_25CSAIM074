#include <stdio.h>

struct Salary {
    int emp_id;
    float basic, hra, da, gross, pf, net;
};

int main() {
    struct Salary payroll[100];
    int count = 0, choice, search_id;

    while(1) {
        printf("\n--- Salary Management ---");
        printf("\n1. Process Salary\n2. Generate Pay Slip\n3. Exit\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Emp ID: "); scanf("%d", &payroll[count].emp_id);
                printf("Enter Basic Salary: "); scanf("%f", &payroll[count].basic);
                payroll[count].hra = payroll[count].basic * 0.20;
                payroll[count].da = payroll[count].basic * 0.50;
                payroll[count].gross = payroll[count].basic + payroll[count].hra + payroll[count].da;
                payroll[count].pf = payroll[count].basic * 0.12;
                payroll[count].net = payroll[count].gross - payroll[count].pf;
                count++;
                printf("Salary Calculated.\n");
                break;
            case 2:
                printf("Enter Emp ID: "); scanf("%d", &search_id);
                for(int i=0; i<count; i++) {
                    if(payroll[i].emp_id == search_id) {
                        printf("\n--- Pay Slip ---\nBasic: %.2f\nHRA: %.2f\nDA: %.2f\nGross: %.2f\nPF Deductions: %.2f\nNet Salary: %.2f\n",
                               payroll[i].basic, payroll[i].hra, payroll[i].da, payroll[i].gross, payroll[i].pf, payroll[i].net);
                    }
                }
                break;
            case 3: return 0;
        }
    }
}
