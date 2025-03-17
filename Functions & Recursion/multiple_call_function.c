// // ---IM_VYADAW------
// #include <stdio.h>
// void printMassage(){
//     printf("Hello, World!\n");
// }
// int main() {
//     printMassage();
//     return 0;
// }

// ---IM_VYADAW------
#include <stdio.h>
void printMessage() {
    char name[50];
    printf("Enter your name: ");
    // scanf("%s", name);
    fgets(name, sizeof(name), stdin);
    printf("Hello, %s!\n", name);
}

int main() {
    printMessage();
    return 0;
}