#include<stdio.h>
int main()
{
    union student{
    int id;
    char name[15];
    char address[20];
    float marks;
}st;
printf("\nstudent id is %d",st.id);
printf("\nEnter the name:\n");
gets(st.name);
printf("\nStudent name is %s",st.name);
printf("\nenter the address:");
gets(st.address);
printf("\naddress of student is %s",st.address);
printf("\nEnter the marks:");
scanf("%f",&st.marks);
printf("\nmarks is %f",st.marks);
printf("Enter the student id:");
scanf("%d",&st.id);
return 0;

}