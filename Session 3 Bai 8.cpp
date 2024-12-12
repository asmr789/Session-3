#include <stdio.h>

int main() {
    int bonchuso;
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &bonchuso);
    if (bonchuso < 1000 || bonchuso > 9999) {
        printf("So nhap vao khong hop le\n");
    }
    int so1 = bonchuso / 1000;        
    int so2 = (bonchuso / 100) % 10; 
    int so3 = (bonchuso / 10) % 10;  
    int so4 = bonchuso % 10;         

    int nghichdao = (so4 * 1000)  + (so3 * 100)+ (so2*10) + so1;

    printf("So nghich dao cua %d la: %d\n", bonchuso, nghichdao);

    return 0;
}
