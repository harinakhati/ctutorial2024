#include<stdio.h>
int main()
{
    float marks[5],sum=0,avg;
    int i;
    printf("enter the marks");
    for(i=0;i<5;i++)
    {
    scanf("%f",&marks[i]);
    sum=sum+marks[i];
    }

    avg=sum/5;
    printf("\nAvg=%f",avg);
    return 0;

}