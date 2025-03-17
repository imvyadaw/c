// // ---IM_VYADAW------
// #include <stdio.h>
// void display(int num){
//     printf(" The number is %d\n", num);
// }
// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     display(number);
//     return 0;
// }

// ---IM_VYADAW------
// no return
#include <stdio.h>
void add(int a,int b){
    printf("The sum is %d\n",a+b);
}
int main() {
    int number;
    int number2;
    printf("Enter first number: ");
    scanf("%d", &number);
    printf("Enter second number: ");
    scanf("%d", &number2);
    add(number,number2);
    return 0;
}