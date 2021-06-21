/*
 * @author kanishka
 * @date 13/06/21
 * 
 * Print the table of any given number
 */

# include <stdio.h>
void main ()
{ 
    int number, multiple;

    printf("Enter the number to print the table\n");
    scanf("%d", &number);
    printf(" table of number %d \n", number);
    for(int i=1; i<=10; i++)
    { 
    multiple = i * number ;
    printf("%d", multiple);
    printf("\n");
    }

}
