//Accept one number from user and display that number of * on screen
//Program to print 5 times "Marvellous" on screen
#include<stdio.h>
void Accept(int iNo)
{   
   int iCnt=0;
   for ( iCnt = 1; iCnt <= 5; iCnt++)
   {
    printf(" * \n");
   }
   
}
int main()
{     
    int iValue=0;
    iValue=5;

    Accept(iValue);
    
    return 0;
}