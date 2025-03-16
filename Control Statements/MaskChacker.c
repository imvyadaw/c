// ---IM_VYADAW------
#include <stdio.h>
int main() {
    int mark;
    printf("Enter your marks: ");
    scanf("%d", &mark);
    if (mark >=90){
        printf("Execllent");
    }else  if(mark>60){
        printf("Good");
    }else if(mark>40){
        printf("pass");
    }else if (mark<40){
        printf("fail");
    } 
    return 0;
}