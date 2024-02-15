#include<stdio.h>
#define PI 3.14159
int main()
{
    int radius;
    printf("enter radius:");
    scanf("%d", &radius);
    printf("Volume is : %lf\n",(4/3)*PI * radius * radius * radius );
    return 0;
}