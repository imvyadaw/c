// ---IM_VYADAW------
#include <stdio.h>
int main() {
    char day;
    printf("Enter day : ");
    scanf("%c", &day);
    switch (day){
        case 's' :printf("sumnday");
        break;
        case 'm': printf("monday");
        break;
        case 't': printf("tuesday");
        break;
        case 'w': printf("wednesday");
        break;
        case 'r': printf("thursday");
        break;
        case 'f': printf("friday");
        break;
        case 'S': printf("saturday");
        break;
        default: printf("Invalid day");
    }
    return 0;
}