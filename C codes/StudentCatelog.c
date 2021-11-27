#include<stdio.h>
	//Declering student structure
struct student
	{
	char name[50];
	int age;
	char mat[10];
	};
struct student structStudent(void);
void displayStudentInfos(struct student std);

int main(void)
{
int number, i;
printf("How many students do you wanna enter thier info? ");
scanf("%d",&number);
struct student s[number];	
	
	//Entring student Infos
int j,count = 1;
for (j = 0;j < number;j ++){
	printf("Student %d\n",count);
	s[j] = structStudent();
	count ++;
}
//Outputing the student infos
 count =1;
 
for(i =0;i < number; i++){
	printf("Student %d\n",count);
	displayStudentInfos(s[i]);
	count ++;
}
 count =1;
 
};

//Function definition of structStudent
struct student structStudent(void){
		struct student std;
		
		printf("Enter the name of student: ");
		scanf("%s",&std.name);
		
		printf("Enter the age of student: ");
		scanf("%d",&std.age);
		
		printf("Enter the matricle of student: ");
		scanf("%s",&std.mat);
		
	return std;
}

void displayStudentInfos(struct student std){
		printf("{ \n");
		printf("  Name:  %s\n",std.name);
		printf("  Age: %d\n",std.age);
		printf("  Matricle: %s\n",std.mat);
		printf("} \n\n");
}