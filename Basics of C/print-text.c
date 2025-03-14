// ---IM_VYADAW------
#include <stdio.h>
int main() {
    printf("--IM_VYADAW");
    float f=5.99;
    printf("value=%f",f);
    short a=0b1010110;
    int b=02713;
    long c=0X1DAB83;
    printf("a=%ho,b=%o,c=%lo\n",a,b,c);
    printf("a=%hd, b=%d, c=%ld\n", a, b, c);
    printf("a=%hx, b=%x, c=%lx\n", a, b, c);
    printf("a=%hX, b=%X, c=%lX\n", a, b, c);
    return 0;
}