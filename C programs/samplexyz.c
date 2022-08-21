#include<stdio.h>
int i = 0;

// Structure to store the student
struct sinfo {
    char fname[50];
    char lname[50];
    int roll;
    float cgpa;
    int cid[10];
} st[55];
void main()
{
    printf("Add the Students Details\n");
    printf("Enter the first name of student:\n");
    scanf("%s", st[i].fname);
    printf("Enter the last name of student:\n");
    scanf("%s", st[i].lname);
    printf("Enter the Roll Number:\n");
    scanf("%d", &st[i].roll);
    printf("Enter the CGPA you obtained:\n");
    scanf("%f", &st[i].cgpa);
}

void find_rl()
{
    int x;
    printf("Enter the Roll Number"
           " of the student\n");
    scanf("%d", &x);
    for (int j = 1; j <= i; j++) {
        if (x == st[i].roll) {
            printf(
                "The Students Details are\n");
            printf(
                "The First name is %s\n",
                st[i].fname);
            printf(
                "The Last name is %s\n",
                st[i].lname);
            printf(
                "The CGPA is %f\n",
                st[i].cgpa);
            printf(
                "Enter the course ID"
                " of each course\n");
        }
        for (int j = 0; j < 5; j++) {
            printf(
                "The course ID are %d\n",
                st[i].cid[j]);
        }
        break;
    }
}
