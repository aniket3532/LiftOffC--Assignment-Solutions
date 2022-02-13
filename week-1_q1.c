#include<stdio.h>
int main()
{
    char name[40];
    printf("Enter your name:");
    gets(name);
    char branch[40];
    printf("Enter your branch name:");
    gets(branch); char hobbies[60];
    printf("Enter your hobbies:");
    gets(hobbies);

    int regd;
    printf("Enter your regd number(last 3 digits):");
    scanf("%d",&regd);
   
    printf("Basic Info:\n");
    printf("Name:");
    puts(name);
    printf("Branch:");
    puts(branch);
    printf("Regd No.:");
    printf("%d",regd);
    printf("\nHobbies:");
    puts(hobbies);
   
    return 0;
    
}