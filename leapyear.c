#include<stdio.h>
void main()
{
   int year;
   printf("enter a year");
   scanf("%d",&year);
   if (year %4 ==0)
   { 
       printf("year is leap year"); 
       
   }
   else
   {
       printf("normal yeear");

   }
}