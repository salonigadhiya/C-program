#include<stdio.h>
int main()
{
    int number;
    printf("\n Enter the value :");
    scanf("%d",&number);
    if(number<0)
    {
        number=number*(-1);
        printf(" Absolute value is %d ",number);
    }
    else
    {
        printf("Absolute value is %d",number);
    }
}
