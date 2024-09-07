#include<stdio.h>
#include<stdlib.h>

struct Employee 
{
    char name[100];
    char role[100];
};

main() 
{
    int n;
    FILE *file;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee *employees = (struct Employee *)malloc(n * sizeof(struct Employee));

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d\n", i + 1);

        printf("Enter employee name: ");
        scanf(" %[^\n]s", employees[i].name);

        printf("Enter employee role (designation): ");
        scanf(" %[^\n]s", employees[i].role);
    }

//    file = fopen("data.txt", "w");
//
//    if (file == NULL) 
//	{
//        printf("Error opening the file!\n");
//        return 1;
//    }
//
//    for (int i=0; i<n;i++) 
//	{
//        fprintf(file, "Employee %d:\n", i + 1);
//        fprintf(file, "Name: %s\n", employees[i].name);
//        fprintf(file, "Role: %s\n\n", employees[i].role);
//    }
//    fclose(file);
//
//    printf("\nEmployee details successfully written to 'data.txt'\n");
//
//    free(employees);

}