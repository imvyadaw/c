// ---IM_VYADAW------

#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("possative number\n");
        if (number %2==0){
            printf("number is even\n");
        }else{
            printf("number is odd\n");    
        }
    }else{
        printf("Odd");
    }
    return 0;
}