#include<stdio.h>
#include<math.h>
int main()
{
 float a;
 printf("Enter radius of circle:");
 scanf("%f",&a);
 printf("\nDiameter of circle is %f units", a*2);
 printf("\nCircumference of circle is %f units", 2 * 3.14 * a);
 printf("\nArea of circle is %f sq units",3.14*pow(a,2));

 return 0;
 }