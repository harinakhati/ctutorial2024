#include<stdio.h>
int main()
{
	int num,digit,temp,sum=0;
	printf("\nenter number:");
	scanf("%d",&num);
	temp=num;
	while(num!=0){
		digit=num%10;
		sum=sum+digit*digit*digit;
		num=num/10;
	}
	if(temp==sum)
	{
		printf("\narmstrong number");
	
	}
	else{
		printf("\n not");
	}
	return 0;
}
