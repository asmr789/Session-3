#include<stdio.h>

int main(){
	float c,fb;
	printf("Nhap so Celsius: ");
	scanf("%f",&c);
	fb = (c * 9 / 5) + 32;
	printf("do Fahrenheit la: %.0f",fb); 
	
	return 0;
}