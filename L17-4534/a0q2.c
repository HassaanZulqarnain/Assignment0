#include <stdio.h>
#include <stdlib.h>

struct student
{
	char* name;
	char* rollNo;
	char* email;
};

int main(void) {
	
	struct student s1,s2,s3;
	struct student* listOfStudents;
	int index = 0;
	
	listOfStudents = (struct student*)malloc( 100 * sizeof(struct student) );
	
	s1.name = "Hassaan";
	s1.rollNo = "L17-4534";
	s1.email = "l174534@lhr.nu.edu.pk";
	
	s2.name = "Basim";
	s2.rollNo = "L17-4022";
	s2.email = "l174022@lhr.nu.edu.pk";
	
	
	s3.name = "Haider";
	s3.rollNo = "L17-4060";
	s3.email = "l174060@lhr.nu.edu.pk";

	listOfStudents[index] = s1;
	index++;
	listOfStudents[index] = s2;
	index++;
	listOfStudents[index] = s3;
	index++;
	
	//Printing Initial 3 CLassmates
	printf("%s %s %s", listOfStudents[0].name, listOfStudents[0].rollNo, listOfStudents[0].email);
	printf("\n");
	printf("%s %s %s", listOfStudents[1].name, listOfStudents[1].rollNo, listOfStudents[1].email);
	printf("\n");
	printf("%s %s %s", listOfStudents[2].name, listOfStudents[2].rollNo, listOfStudents[2].email);
	printf("\n");
	
	//Adding classmates in list
	printf("---Adding a Student---\n");
	
	char* tempName = (char*)malloc(100 * sizeof(char));
	char* tempRollNo = (char*)malloc(20 * sizeof(char));
	char* tempEmail = (char*)malloc(100 * sizeof(char));
	struct student s69;
	
	int boolCheck = 1;
	char yesOrNo;
	while (boolCheck == 1)
	{
		printf("Enter Name: ");
		scanf("%s", tempName);
		
		printf("Enter Roll Number: ");
		scanf(" %s", tempRollNo);
		
		printf("Enter Email: ");
		scanf(" %s", tempEmail);
		
		s69.name = tempName;
		s69.rollNo = tempRollNo;
		s69.email = tempEmail;
		
		listOfStudents[index] = s69;
		index++;
		
		printf("Do you want to ADD another Student? Y/N\n");
		scanf(" %c", &yesOrNo);
		
		if (yesOrNo == 'Y' || yesOrNo == 'y')
			boolCheck = 1;
		else
			boolCheck = 0;
	}
	
	//Reading classmates from list
	printf("---Reading a Student---\n");
	
	int inputIndex;
	int boolCheckForRead = 1;
	char yesOrNoForRead;
	while (boolCheckForRead == 1){
	    
	    printf("Input index of student you want to read: ");
    	scanf("%d", &inputIndex);
    	
    	printf("\n");
    	printf("%s %s %s", listOfStudents[inputIndex].name, listOfStudents[inputIndex].rollNo, listOfStudents[inputIndex].email);
    	
    	printf("\n");
    	printf("Do you want to READ another Student? Y/N\n");
		scanf(" %c", &yesOrNoForRead);
		
		if (yesOrNoForRead == 'Y' || yesOrNoForRead == 'y')
			boolCheckForRead = 1;
		else
			boolCheckForRead = 0;
    	
	}
	
	//Deleting classmate from list
	printf("---Deleting a Student---\n");
	
	int deleteIndex;
	int boolForDelete = 1;
	char forDelete;

	while(boolForDelete == 1){
		printf("Input index of student you want to delete: ");
	    	scanf("%d", &deleteIndex);
		if(listOfStudents[deleteIndex].name == NULL)
			printf("record doesnt exist\n");
		else{

		listOfStudents[deleteIndex].name = NULL;
		listOfStudents[deleteIndex].rollNo = NULL;
		listOfStudents[deleteIndex].email = NULL;
		index--;
		printf("record deleted\n");
		}
		printf("Do you want to Delete another Student? Y/N\n");
		scanf(" %c", &forDelete);
		if (forDelete == 'Y' || forDelete == 'y')
			boolForDelete = 1;
		else
			boolForDelete = 0;
	}
	return 0;
}
