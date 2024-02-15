#include<stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age>=18){
        printf("eligible to vote");
    }
    else if(age>10){
        printf("you are teen");
    }
    else{
        printf("not eligible to vote");
    }
    printf("your entered age us %d",age);
    return 0;
}
