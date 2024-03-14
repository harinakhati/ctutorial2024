//wap to find largest and smallest element in an array of 'n' integers.

#include<stdio.h>
int main()
{
    int a[50],n,i,l,s;
     printf("Enter the value of n:");
    scanf("%d",&n);
    printf("\nEnter the array element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=a[0];
    s=a[0];
    for(i=1;i<n;i++)
    {
        if(l<a[i])
        {
            l=a[i];
        }
        if(s>a[i])
        {
            s=a[i];
        }
    }
    printf("\nlargest=%d and smallest =%d\n",l,s);
    return 0;
}