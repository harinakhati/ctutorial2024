#include<stdio.h>
int main()
{
	int n,ch,fact=1,i;
	printf("1.check even or odd.\n2.check +ve or -ve.\n3.find factorial.\n");
	printf("enter the number:");
	scanf("%d",&n);
	
	printf("\nenter your choice(1-4):");
	scanf("%d",&ch);
	switch(ch){
	
	case 1:
		if(n%2==0){
			printf("\n%d is even",n);
		}else{
			printf("\n%d is odd",n);
		}
		break;
		case 2:
			if(n>0){
				printf("\n%d is positive",n);
			}else{
				printf("\n%d is negative",n);
			}
			break;
			case 3:
				for(i=1;i<=n;i++){
				fact=fact*i;
			}
				printf("\n%d is factorial of %d",fact,n);
				break;
				default:
					printf("\ninvalid input");
				}
					return 0;
}
