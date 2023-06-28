#include <stdio.h>
#include <string.h>

struct employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct employee emp[5];
    printf("Enter details of 5 employees:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter id of employee %d: ", i+1);
        scanf("%d", &emp[i].id);
        printf("Enter name of employee %d: ", i+1);
        scanf("%s", emp[i].name);
        printf("Enter salary of employee %d: ", i+1);
        scanf("%f", &emp[i].salary);
    }
    printf("\nDetails of employees with salary less than 15,000:\n");
    for (int i = 0; i < 5; i++) {
        if (emp[i].salary < 15000) {
            printf("ID: %d\nName: %s\nSalary: %.2f\n\n", emp[i].id, emp[i].name, emp[i].salary);
        }
    }
    return 0;
}//
