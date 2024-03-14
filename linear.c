#include<stdio.h>
int main()
{
    int a[50],n,i,key;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("\nEnter the array element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the search key:\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            break;
        }
    }
    if(i==n)
    {
        printf("\nsearch failure\n");
    }
    else{
        printf("\nsearch successful and location=%d",i+1);
    }
    return 0;
}