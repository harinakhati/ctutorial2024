#include<stdio.h>
int main()
{
    float marks[38],sum=0,avg;
    int i;
    printf("enter the marks");
    for(i=0;i<38;i++)
    {
    scanf("%f",&marks[i]);
    sum=sum+marks[i];
    }

    avg=sum/38;
    printf("\nAvg=%f",avg);
    return 0;

}