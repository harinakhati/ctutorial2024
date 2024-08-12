#include<stdio.h>
#include<math.h>
#define PI 3.141
float polysum(float n, float s);
int main()
{
	int n, i;
	float s,A,P,sq;
	printf("Enter number of sides of polygon: ");
	scanf("%d",&n);
	printf("Enter length of side: ");
	scanf("%f",&s);
	A=(0.25*n*pow(s,2))/(tan(PI/n));
	P=n*s;
	sq=pow(P,2);
	printf("The sum of area and square of perimeter is: %.4f",polysum(A, sq));
	return 0;
}
float polysum(float n,float s){
	return n+s;
}
