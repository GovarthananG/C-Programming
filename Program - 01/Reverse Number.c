/*
1. Reverse Number
Qns :  Given a number N, print reverse of number N.
Note:  Do not print leading zeros in output.
            For example N = 100
            Reverse of N will be 1 not 001.
            Input: Input contains a single integer N.
            Output: Print reverse of integer N.
            Constraints:
            1<=N<=10000
*/

/* Steps, I followed
        1. Getting the User Input
        2. Reversing the Number with Logic : The remainder zeroes will be neglected.
        3. Printing the Reversed digits.
*/


//Program
#include<stdio.h>
int main()
{

   short int num,rev=0,i,rem;
   printf("Enter the number : \t");
   scanf("%d",&num);
   while(num>0)
   {
       rem=num%10;
       rev= rev*10 + rem;
       num= num/10;
   }
   printf("\nThe reversed Number:\t %d \n",rev);
}
