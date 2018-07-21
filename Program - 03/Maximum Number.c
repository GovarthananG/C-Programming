/*
Maximum Number
Qns : Given an array of numbers, arrange them in a way that yields the largest value.
Note : For example, if the given numbers are {54, 546, 548, 60}, the arrangement 6054854654 gives the largest value.
    Input: First line contains an integer N , Next line contains N integers separated by space.
    Output: Print the maximum number that can be obtained by using given numbers.

Constraints:
1<=N<=1000
1<=Number<=1000000
*/

/* Steps, I followed.
    1. Getting the number of values to store in array
    2. Getting the user input stream of values
    3. Sorting the values in Lexicographical Order : Using logics
    4. Printing the array values in Descending Order.
*/


#include<stdio.h>
#include <string.h>

main()
{
    int i, j, num;
    char str[50][50], temp[50];

    printf("Enter the number of Integers:\t");
    scanf("%d",&num);

    for(i=0; i<num; ++i)
        scanf("%s[^\n]",str[i]);


    for(i=0; i<num-1; ++i)
        for(j=i+1; j<num ; ++j)
        {
            if(strcmp(str[i], str[j])>0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    printf("\nThe Largest Number will be :\t");
    for(i=num-1; i>=0; i--)
    {
        printf("%s",str[i]);
    }
}
