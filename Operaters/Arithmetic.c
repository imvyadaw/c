#include <stdio.h>
int main(){
    int a;
    int b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf(" Enter second number: ");
    scanf("%d",&b);
    printf("Addition: %d\n", a + b);  
    printf("Subtraction: %d\n", a - b);  
    printf("Multiplication: %d\n", a * b);  
    printf("Division: %d\n", a / b);       
    printf("Modulus: %d\n", a % b);  
    return 0;
}
