#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    char name[30];
    int id;
    char dept[20];
    double salary;
} Employee;
 
int main()
{
    //number of employees
    int n=20;
    
    //array to store structure values of all employees
    Employee employees[n];
 
    //Taking each employee detail as input
    printf("Enter %d Employee Details \n \n",n);
        printf("Name:","Id","Salary\n");
        
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);

        //Name
        printf("Name: ");
        scanf("%[^\n]s",employees[i].name);

        //ID
        printf("Id: ");
        scanf("%d",&employees[i].id);
        printf("dept:");
        scanf("%s",&employees[i].dept);
        //Salary
        printf("Salary: ");
        scanf("%lf",&employees[i].salary);

        //to consume extra '\n' input
        char ch = getchar();
 
        printf("\n");
    }
 
    //Displaying Employee details
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \t",employees[i].name);
 
        printf("Id \t: ");
        printf("%d \t",employees[i].id);
        
        printf("dept \t: ");
        printf("%s\t",employees[i].dept);
        
 
        printf("Salary \t: ");
        printf("%.2lf \t",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
}
