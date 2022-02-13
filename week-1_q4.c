#include<stdio.h>

int main(){
    printf("Enter two numbers:");
    int a,b;
    scanf("%d %d", &a, &b);
    printf("Operations:\n"); 
    switch(0){
      case 0:
        printf("%d + %d = %d\n", a, b, a+b );
      case 1:
        printf("%d - %d = %d\n", a, b, a-b);
      case 2:
        printf("%d x %d = %d\n", a, b, a*b);
      case 3:
        printf("%d / %d = %f\n", a, b, (float)a/b);
      case 4:
        printf("Remainder of %d / %d is %d", a,b,a%b);  
      default:
        break;    
              
    return 0;
    }  
}