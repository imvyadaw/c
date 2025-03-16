// ---IM_VYADAW------
#include <stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age<0||age>100){
        printf("Invalid age! Please enter a valid age between 0 and 100.\n");
    }else{
        age>18? printf("You are eligible to vote.") : printf("You are not eligible to vote.");
    }
    return 0;
}