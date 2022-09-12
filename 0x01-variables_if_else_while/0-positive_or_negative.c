#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void) {
    int number;
    scanf("%d", &number);
    if(number > 0)
        printf("%d is positive \n", number);
    else if (number==0)
     printf("%d is zero \n", number);
    else
       {
        printf("%d is  negative \n", number);
       }
    return (0);
 } 

