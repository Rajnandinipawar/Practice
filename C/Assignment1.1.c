//Program to divide two numbers
#include<stdio.h>
int Divide(int iNo1 , int iNo2)
{
    int iAns=0;
    if(iNo2<0)
    {
        return -1;
    }
    iAns=iNo1/iNo2;
    return iAns;
}
int main()
{   
    int iVaue1=15,iVaue2=5;
    int iRet=0;

    iRet=Divide(iVaue1,iVaue2);

    printf("Division is %d",iRet);

    return 0;
}