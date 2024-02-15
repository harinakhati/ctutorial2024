#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<10;i++){
        printf("%d*%d=%d\n",n,i+1,n*(i+1));
    }
}