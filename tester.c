#include<stdio.h>

 struct employee{
  char name[30];
  char school[30];
  int age;
  float height;
 }emp1, emp2;

 int main(){
 struct employee manager;

 int  age = 27;
 float height = 2.2;
 char* name = "sammydoh";
 char* school = "Khan_academy";
 //input employee 1 details
 printf("Enter employee 1 name :");
 scanf("%s", &emp1.name);
 printf("Enter employee 1 school: ");
 scanf("%s",&emp1.school);
 printf("Enter employee 1 age :");
 scanf("%d", &emp1.age);
 printf("Enter employee 1 height :");
 scanf("%f",&emp1.height);
 //Enter employee 2 details

 printf("Enter employee 2 name :");
 scanf("%s", &emp2.name);
 printf("Enter employee 2 school: ");
 scanf("%s",&emp2.school);
 printf("Enter employee 2 age :");
 scanf("%d", &emp2.age);
 printf("Enter employee 2 height :");
 scanf("%f",&emp2.height);
 //give the output function
 //employee 1 details
 printf("\n\nEmployee 1 name is %s\n",emp1.name);
 printf("Employee 1 school is %s\n",emp1.school);
 printf("Employee 1 age is %d\n",emp1.age);
 printf("Employee 1 height is %f\n\n",emp1.height);
 //employee 2 details
 printf("Employee 2 name is %s\n",emp2.name);
 printf("Employee 2 school is %s\n",emp2.school);
 printf("Employee 2 age is %d\n",emp2.age);
 printf("Employee 2 height is %f\n\n",emp2.height);
 //manager's details
 printf("Manager's name is %s\n",name);
 printf("manager's school is %s\n",school);
 printf("Manager's age is %d\n",age);
 printf("Manager's height is %f\n\n",height);

 return 0;
 }
