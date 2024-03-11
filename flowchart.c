#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a,b and c");
    scanf("%d%d%d",&a,&b,&c);

//largest
    if(a>b&&a>c)
    {
        printf("%d is largest",a);

    //even or odd
          if(a%2==0)
    {
        printf("%d is even",a);
    }
    else
    {
        printf("%d is odd",a);
    }

    }
    else if(b>a&&c>a)
    {
        printf("%d is largest",b);

     //even or odd
            if(b%2==0)
        {
            printf("%d is even",b);
         }
         else
         {
               printf("%d is odd",b);
         }

    }
    else
    {
        printf("%d is largest",c);

     //even or odd
         if(c%2==0)
    {
        printf("%d is even",c);
    }
    else
    {
        printf("%d is odd",c);
    }

    }

//smallet
    if(a<b&&a<b)
    {
        printf("%d is smallest",a);

     //even or odd
         if(a%2==0)
    {
        printf("%d is even",a);
    }
    else
    {
        printf("%d is odd",a);
    }

    }
    else if(b<a&&b<c)
    {
        printf("%d is smallest",b);

    //even or odd
         if(b%2==0)
    {
        printf("%d is even",b);
    }
    else
    {
        printf("%d is odd",b);
    }

    }
    else
    {
        printf("%d is smallest",c);

     //even or odd
         if(c%2==0)
    {
        printf("%d is even",c);
    }
    else
    {
        printf("%d is odd",c);
    }
return 0;
    }
}