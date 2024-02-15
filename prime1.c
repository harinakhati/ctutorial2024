#include<stdio.h>
int main()
{
	int n,i=2,j,num;
	printf("enter the number:");
	scanf("%d",&n);
	
	for(j=1;j<=n;i++){
		for(num=2;num<=i;num++)
{
	if(i%num==0)
	break;
		
}
if(num==i){

		printf("\n%d\t",i);
j++;
}
}
	return 0;
}
