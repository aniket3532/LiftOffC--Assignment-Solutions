#include <stdio.h>

int main(){
    printf("Enter a number:");
    int a;
    scanf("%d", &a);
    switch (a%2)
    {
    case 0:
        printf("%d is even", a);
        break;
    case 1:
        printf("%d is odd", a);
        break;
    
    default:
        break;
    }
    return 0;

}