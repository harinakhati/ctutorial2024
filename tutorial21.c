#include<stdio.h>
int fact(int num)
{
    if(num==1||num==0)
    {
        return 1;
    }
    else{
        return(num*fact(num-1));
    }
}
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("the factorial of %d is %d",n,fact(n));
    return 0;
}