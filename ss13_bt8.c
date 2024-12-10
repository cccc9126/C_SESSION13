#include <stdio.h>
int ucln(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}

int main(int argc, const char * argv[]) {
    int a,b;
    printf("hay nhap so thu nhat : ");
    scanf("%d",&a);
    printf("hay nhap so thu hai : ");
    scanf("%d",&b);
    printf("%d", ucln(a, b));
    return 0;
}

