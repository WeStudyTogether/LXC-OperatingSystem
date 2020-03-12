#include <stdio.h>

double compute(double x,double y);

void main(){
	float x,y;

	printf("The program takes x and y from stdin and displays x^y\n");
	printf("Enter integer x:");
	scanf("%f",&x);
	printf("Enter integer y:");
	scanf("%f",&y);
	printf("x^y is: %6.3f\n",compute(x,y));
}
