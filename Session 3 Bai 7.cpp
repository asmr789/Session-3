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

    int tong = so1  + so2 + so3 + so4;

    printf("Tong cac chu so trong %d la: %d\n", bonchuso, tong);

    return 0;
}
