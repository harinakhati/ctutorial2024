#include<stdio.h>
#include<math.h>//for functions like sin(),cos(),etc.
#define PI 3.141592//defining the value of constant PI

int main()
{
    float degree,angle,sine,cosine;
    //printf("Enter the degree:");//entering the degree to find value of sin()and cos()
   // scanf("%f",&degree);
     printf("angle| sine| cosine\n");
    printf("-----|-----|-----\n");

    for(degree=0;degree<=90;degree=degree+15)//loop condition to find check that input is eligible to run or not
    {
        angle=degree*PI/180.0;//calculation
        sine=sin(angle);
        cosine=cos(angle);
        printf("\n%f|%f|%f\n",degree,sine,cosine);//printing the value of sine and cosine
        
    }
    return 0;
}
