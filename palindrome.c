#include <stdio.h>

void palindrome()
{
   int Number, Temp, Reminder, Reverse = 0;
 
   printf("\nPlease Enter any number to Check for Palindrome\n");
   scanf("%d", &Number);
  
   //Helps to prevent altering the original value
   Temp = Number;

   while ( Temp > 0)
   {
      Reminder = Temp %10;
      Reverse = Reverse *10+ Reminder;
       Temp = Temp /10;
   }
 
   printf("Reverse of entered number is = %d\n", Reverse);

   if ( Number == Reverse )
      printf("\n%d is Palindrome Number.\n", Number);

   else
      printf("%d is not the Palindrome Number.\n", Number);
 
} 
echo "hai"
echo " hai anandha"
   echo " hai vinay"
