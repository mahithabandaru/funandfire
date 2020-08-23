#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
 
    char name[30];
    int phone;
    int age;
    int salary;
 
} Employee;
 
int main()
{
    int i, n=1;
 
    Employee employees[n];
 printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++)
	{
        printf("Employee %d:- \n",i+1);
        printf("Name: ");
        scanf("%s",employees[i].name);
        printf("Phone: ");
        scanf("%d",&employees[i].phone);
        printf("Age :");
        scanf("%d",&employees[i].age);
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
        printf("\n");
    } 
    printf("-------------- All Employees Details ---------------\n");
 
    for(i=0; i<n; i++)
	{
	    
        printf(" Name  \tphone   \tAge \tSalary \t\n ");
        printf("%s \t %d \t %d \t %d \t",employees[i].name,employees[i].phone,employees[i].age,employees[i].salary);
 
       // printf("Name \t: ");
        //printf("%s \n",employees[i].name);
 
        //printf("phone \t: ");
        //printf("%d \n",employees[i].phone);
        
        //printf("Age \t:");
        //printf("%d \n",employees[i].age);
 
        //printf("Salary \t: ");
        //printf("%d \n",employees[i].salary);
 
        //printf("\n");
    }
    
 
    return 0;
 
}
