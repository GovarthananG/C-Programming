/* Closest Gift
Qns: You are on your way to find the gifts. All the gifts lie in your path in a straight line at prime
numbers and your house is at 0.
Note: Given your current position find the closest gift to your position, and calculate the distance
between your current position and gift and tell the distance.

Ex:
For input 0, the output is 2
For number = 11, the output should be 0
For number = 2000000000, the output should be 11 For number = 1800000001, the output
should be 10

*/

/* Steps, I followed
        1. Getting the Current Position
        2. Find the next gift position : Finding the next Prime Number using Logics
        3. Then, distance calculated from Nextpos and Current position
        4. Printing the Distance

*/

//Program

#include<stdio.h>
main()
{
long int i,j,count,pos,nextpos,distance;

printf("\nEnter the position of Gift :\t");
scanf("%d",&pos);
for(i=pos+1;1;i++)
{
 for(j=2,count=0;j<=i;j++)
 {
    if(i%j == 0)
      {
          count++;
      }
 }
    if(count==1)
      {
         nextpos=i;
         break;
      }
}
distance = i-pos;
printf("\nThe Next Gift Position is:\t%d",nextpos);
printf("\n\nThe distance is:\t%d \n\n",distance);
}

