# include <stdio.h>
void main()
{
float marks , omarks , percentage;
for ( int i=1; i<=4; i++ )
{
   printf(" enter obtained marks and maximum marks respectively for subject %d\n", i);
   float a,b;
   scanf("%f %f", &a,&b);
   marks= b+marks;
   omarks= omarks+a;

}
percentage= (omarks/marks)*100;
printf("PERCENTAGE OBTAINED :   %f", percentage);

}