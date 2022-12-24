#include<stdio.h>

 void main ()

 { int a,b,c;
   printf("\n Enter the Age of Ram : ");
   scanf("%d",&a);
   printf("\n Enter the Age of Shyam : ");
   scanf("%d",&b);
   printf("\n Enter the Age of Ajay : ");
   scanf("%d",&c);


    if(a == b){
        printf("Same RS");
    }
    else if(a == c){
        printf("Same RA");
    }
    else if(b == c){
        printf("Same SA");
    }
}

