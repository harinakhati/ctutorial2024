#include<stdio.h>
int fibo(int n);
int prime(int n);
int main()
{
    int i,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d\t",fibo(i));
    }
    
    return 0;
    }
    int fibo(int n)
    {
       
    if(n==0||n==1)
    return n;
    else
     return fibo(n-1)+fibo(n-2);
    }
    int prime(int n){
      if(n%1==0 && n%n==0)
       return 
        else
       return 
    }