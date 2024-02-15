int main()
{
    int subject;
    printf("The list of subjects which you have passed has been given below\n");
    printf("1. Science only\n 2. Maths only\n 3. Both Science and Maths\n");
    printf("Choose one of the options above: ");
    scanf("%d", &subject);
    if (subject == 1)
    {
        printf("Hurrayy! You have won 15 rupees");
    }
    else if (subject == 2)
    {
        printf("Hurrayy! You have won 15 rupees");
    }
    else if (subject == 3)
    {   
        printf("Hurrayy! You have won 45 rupees");   
    }
    else
    {
        printf("You have made an invalid choice!");
    }
    
    
    

    return 0;
}