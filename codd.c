#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=1;i<=10;i++)
	{
		if(i%2==1)
		sum=sum+i;
	}
	printf("\n%d=sum of first 10 odd number",sum);
	return 0;
}
