#include<stdio.h>
int main()
{
    int i,n,rem,count;
    
    printf("enter a number:");
    scanf("%d",&n);

    for(i=2;i<=n/2;i++)
    {
        rem=n%i;
        if(rem==0){
            count++;
            break;

        }
    }

    if(count==0&&n!=1)
    {
        printf("prime number");
    }
    else
    {
        printf("composite number");
    }
    return 0;
}