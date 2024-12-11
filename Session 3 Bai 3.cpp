#include <stdio.h>
#define PI 3.14159

int main() {
    float r, a, b;
    printf("Nhap ban kinh hinh tron (r): ");
    scanf("%f", &r);
    a = 2 * PI * r;
    b = PI * r * r;
    printf("Chu vi hinh tron: %.2f\n", a);
    printf("Dien tich hinh tron: %.2f", b);

    return 0;
}