     //This program is made by Saloni Gadhiya_22CE029.
#include<stdio.h>

int main()
{
    int num;
    printf("\n Enter number :");
    scanf("%d",&num);
    binary(num);
    printf("\n This program is made by Saloni Gadhiya_22CE029.");
}
binary(int num)
{
    if(num==0)
    {
        return 1;
    }
    else
    {
        binary(num/2);
        printf("%d",num%2);
    }
}




