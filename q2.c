# include <stdio.h>
void main()
{
    float principal,rate, years;
    printf(" enter principal , rate, no of years respectively\n");
    scanf("%f %f %f", &principal, &rate, &years );
     float interest= principal*rate*years/100;
    printf("Interest payable   : %f", interest);
    
     }