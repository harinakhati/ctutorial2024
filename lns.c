#include<stdio.h>
int main()
{
	int s,l,a,b,c;
	printf("Enter any three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		l=a;
		printf("\n%d is largest",a);
	}
	else if(b>a&&b>c)
	{
		l=b;
		printf("\n%d is largest",b);
	}
	else
	{
		l=c;
		printf("\n%d is largest",c);
	}
	if(a<b&&a<c)
	{
		s=a;
		printf("\n%d is smallest",a);
	}
	else if(b<a&&b<c)
	{
		s=b;
		printf("\n%d is smallest",b);
	}
	else
	{
		s=c;
		printf("\n%d is smallest",c);
	}
	if(l%2==0)
	{
		printf("\nThe largest number is even");
	}
	else
	{
		printf("\nThe largest number is odd");
	}
	if(s%2==0)
	{
		printf("\nThe smallest number is even");
	}
	else
	{
		printf("\nThe smallest number is odd");
	}
	return 0;
}
