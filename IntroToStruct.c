#include <stdio.h>
#include <stdlib.h>
/*
Author: Perengrine
Purpose: create an employee structure with 3 members
 * name (Character array)
 * hireDate (int)
 * salary (float)
 * create an instance of employee type
 * add a second employee in
 * print out the contents of employee, itll just change the values
 */
 
 
 
 struct employee_Data
 {
     char name[25];
     char hire_Date[25];
     float salary;
 };
 
 
 int main ()
 {
     // initializing setting some data in the struct
     struct employee_Data employee = {.name = "perengrine", .hire_Date = "01/01/01", .salary = 80000};
     
     printf("Name: %s\nHire Date: %s\nSalary: %f\n", employee.name, employee.hire_Date, employee.salary);
     
     // adding new data in
     printf("\n\nNew Name:\n");
     gets(employee.name);
     
     printf("\n\nNew Hire Date:\n");
     gets(employee.hire_Date);
     
     printf("\n\nNew Salary:\n");
     scanf("%f", &employee.salary);
     
     // printing the new data
     printf("\n\n\nName: %s\nHire Date: %s\nSalary: %f\n", employee.name, employee.hire_Date, employee.salary);
     
     return 0;
 }