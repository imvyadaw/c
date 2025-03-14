#include <stdio.h>
int main(){
    int age;
    printf("enter your age: ");
    if(scanf( "%d",&age)!=1){
        printf("Invalid input");
    }else if(age<18){
        printf("You cant vote now");
    }else{
        printf("You can vote now");
    }
    return 0;
}