


#include <stdio.h>

int main()
{
    int choice,km,inch,cm,pound ;

    printf(" 1 for kms to miles\n 2 for inches to foot \n 3 for cms to inches\n 4 for pound to kgs\n 5 for inches to meters \n 6 for exit \n");

  label:

    printf(" Enter value of choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        printf(" Enter value of kms: ");
        scanf("%d", &km);

        printf("%d kms is equal to %.4f Miles\n",km, 0.6214*km);
        break;

    case 2:
        printf(" Enter value of inches: ");
        scanf("%d", &inch);

        printf("%d inches is equal to %.4f foot\n",inch, 0.0833*inch);
        break;

    case 3:
        printf(" Enter value of Cms: ");
        scanf("%d", &cm);

        printf("%d Cms is equal to %.4f inches\n",cm, 0.394*cm);
        break;

    case 4:
        printf(" Enter value of pounds: ");
        scanf("%d", &pound);

        printf("%d pounds is equal to %.4f kgs \n",pound, 0.454*pound);
        break;

    case 5:
        printf(" Enter value of inches: ");
        scanf("%d", &inch);

        printf("%d inches is equal to %.4f metre \n",inch, 0.0254*inch);
        break;

    case 6:
        {
            return 0;

        }
    default :
        printf(" Enter valid choices \n");
    }
    goto label ;
}
// output:

//1 for kms to miles
 //2 for inches to foot
 //3 for cms to inches
 //4 for pound to kgs
// 5 for inches to meters
 //6 for exit
 //Enter value of choice: 1
 //Enter value of kms: 1
//1 kms is equal to 0.6214 Miles
 //Enter value of choice: 2
// Enter value of inches: 1
//1 inches is equal to 0.0833 foot
 //Enter value of choice: 3
 //Enter value of Cms: 1
//1 Cms is equal to 0.3940 inches
 //Enter value of choice: 4
 //Enter value of pounds: 1
//1 pounds is equal to 0.4540 kgs
 //Enter value of choice: 5
 //Enter value of inches: 1
//1 inches is equal to 0.0254 metre
// Enter value of choice: 7
 //Enter valid choices
 //Enter value of choice: 6

//Process returned 0 (0x0)   execution time : 51.663 s
//Press any key to continue.

