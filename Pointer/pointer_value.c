// ---IM_VYADAW------
#include <stdio.h>
int main() {
    int  Myage;
    int*ptr=&Myage;
    printf("Enter your age: ");
    scanf("%d",ptr);
    printf("%p",Myage);
    printf("%p\n" ,ptr);
    return 0;
}