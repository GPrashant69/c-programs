// Function to add the student into the database
void add_student()
{

	printf("Add the Students Details\n");
	printf("-------------------------\n");
	printf("Enter the first name of student\n");

	// First name of the student
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
