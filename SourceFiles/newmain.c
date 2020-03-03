#include <xc.h>

int add(int a, int b);
void main(void) {
    int c = 7;
    int d = 15;
    int e = add(c,d);
    e = e + 2;    
    return;
}

int add(int a, int b){
    int m = a + b;
    return m;
}