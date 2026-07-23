//Accept the number from user and check wheather number is divisible by 5 or not

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0


BOOL Check(int iNo)
{
    if(iNo%5==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{   
    int iVaue=0;
    BOOL bRet=0;

    printf("Enter the number:\n");
    scanf("%d",&iVaue);

    bRet=Check(iVaue);

    if (bRet==TRUE)
    {
        printf("%d is divisible by 5\n",iVaue);
    }
    else
    {
        printf("%d is  not divisible by 5\n",iVaue);
    }   

    return 0;
}