#include <stdio.h>
#include <string.h>

struct student {
    int sid;
    char sname[20];
    int sem;
    float per;
};

int main() {
    struct student s[5];
    int i;
    for (i = 0; i < 5; i++) {
        printf("Enter the details of student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &s[i].sid);
        printf("Name: ");
        scanf("%s", s[i].sname);
        printf("Semester: ");
        scanf("%d", &s[i].sem);
        printf("Percentage: ");
        scanf("%f", &s[i].per);
    }
    printf("The names of students who scored more than 70%% are:\n");
    for (i = 0; i < 5; i++) {
        if (s[i].per > 70.0) {
            printf("%s\n", s[i].sname);
        }
    }
    return 0;
}
