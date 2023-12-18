/* Author: JAYADEEP
   Implementation of structures */

#include <stdio.h>
#include <stdlib.h>
struct student{
    char name[100];
    int rollno;
    int age;
    float cgpa;
}jayadeep;
int main(){
    printf("Enter name: ");
    scanf("%s",&jayadeep.name);
    printf("Enter Rollno: ");
    scanf("%d",&jayadeep.rollno);
    printf("Enter Age: ");
    scanf("%d",&jayadeep.age);
    printf("Enter CGPA: ");
    scanf("%f",&jayadeep.cgpa);
    
    printf("\nName : %s",jayadeep.name);
    printf("\nRollno : %d",jayadeep.rollno); 
    printf("\nAge : %d",jayadeep.age);
    printf("\nCGPA : %f",jayadeep.cgpa);
    return 0;
}




//output:
      Enter name: Jayadeep
      Enter Rollno: 0005
      Enter Age: 19
      Enter CGPA: 8.8
      Name : Jayadeep
      Rollno : 5
      Age : 19
      CGPA : 8.800000
