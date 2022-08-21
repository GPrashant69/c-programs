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
    printf("-------------------------\n");
    printf("Enter the first name of student\n");
    st[i].fname = "Rahul";
    printf("Enter the last name of student\n");

    // Last name of the student
    st[i].lname = "Kumar";
    printf("Enter the Roll Number\n");

    // Roll Number of the student
    st[i].roll = 1;
    printf("Enter the CGPA you obtained\n");

    // CGPA of the student
    st[i].cgpa = 8;
    printf("Enter the course ID"
           " of each course\n");

    // Storing the courses every student
    // is enrolled in
    for (int j = 0; j < 5; j++) {
        st[i].cid[j] = j;
    }
    i = i + 1;
}
