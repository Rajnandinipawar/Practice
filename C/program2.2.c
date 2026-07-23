//Accept one number from user and display that number of * on screen
#include<stdio.h>
void Display(int iNo)
{
    //updator
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        printf(" * \n");
        iNo--;
    }    
}

int main()
{
    int iValue = 0;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}