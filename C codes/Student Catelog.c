#include<stdio.h>
int structStudent(int num){
	//Declering student structure
	int num, i;
	struct std
	{
	char name[50];
	int age;
	char mat[10];
	};

	//Declering Variavles
	int k = 1;
	struct std s[num];

	//Entring student Infos
for( i=1; i <=num; i++){

	printf("Enter the name of student %d: ",k);
	scanf("%s",&s[i].name);
	
	printf("Enter the age of student %d: ",k);
	scanf("%d",&s[i].age);
	
	printf("Enter the matricle of student %d: ",k);
	scanf("%s",&s[i].mat);
	k++;
}
}
int main(void)
{

int number,num, j;

printf("How many students do you wanna enter info? ");
scanf("%d",&number);
structStudent(number);

int count = 1;

for (j=1;j<=num;j++){
	printf("Student %d\n",count);
	printf("{ \n");
	printf("  Name:  %s\n",s[j].name);
	printf("  Age: %d\n",s[j].age);
	printf("  Matricle: %s\n",s[j].mat);
	printf("} \n\n");
	count ++;
}
}
int addStudent(int a){
	int numberAdded;
	printf("How many sudent do you wanna add\n");
	scanf("%d",&numberAdded);

//Adding the corresponding number of students
int k;
for (int i = 0; i < numberAdded; i++)
{
	
	printf("Enter the name of student %d: ",k);
		scanf("%s",&s[i].name);
		
		printf("Enter the age of student %d: ",k);
		scanf("%d",&s[i].age);
		
		printf("Enter the matricle of student %d: ",k);
		scanf("%s",&s[i].mat);
		//k++;

 }
 };

