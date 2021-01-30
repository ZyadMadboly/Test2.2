#include <stdio.h>
#include <stdlib.h>
int main()
{
    char cc,RE;
    int o;
    printf("Iam Zeiad");
    printf("\t Multi Calculator \n\n");
    RE:
    printf(" Select a calculator \n\n");
    printf(" a: for arithmetic calculator \n l: for logic calculator \n p: to solve quadratic equation \n ");
    scanf(" %c",&cc);
    switch(cc)
{
  case 'a':
printf(" Arithmetic calculator \n");
    float x;
    float y;
    char z;
    printf(" Chose an operation (+,-,*,/): ");
    scanf(" %c",&z);
printf("\n\n");
    printf(" Please enter the first No.: ");
    scanf("%f",&x);
printf("\n");
    printf(" Please enter the second No.: ");
    scanf("%f",&y);
if(z == '+')
{
  		printf("\n The result of \n %.2f + %.2f  = %.2f \n", x, y, x + y);
}
else if(z == '-')
{
   printf("\n The result of \n %.2f - %.2f  = %.2f \n", x, y, x - y);
}
else if(z == '*')
{
   printf("\n The result of \n %.2f * %.2f  = %.2f \n", x, y, x * y);
}
else if(z == '/')
{
 printf("\n The result of \n %.2f / %.2f  = %.2f \n", x, y, x / y);
}
else
        printf("\n You have entered an Invalid Operation ");
break;
case 'l':
    printf(" Logic calculator \n");
    int m;
    int n;
    char r;
    printf(" Chose an operation (&,|,^,!): ");
    scanf(" %c",&r);
printf("\n");
    printf(" Please enter the first digit: ");
    scanf("%d",&m);
printf("\n");
    printf(" Please enter the second digit: ");
    scanf("%d",&n);
if(r == '&')
{
    printf("\n The result of \n %d & %d  = %d \n", m, n, m&n);
}
else if(r == '|')
{
   printf("\n The result of \n %df | %d  = %d \n", m, n, m | n);
}
else if(r == '^')
{
    printf("\n The result of \n %d ^ %d  = %d \n", m, n, m ^ n);
}
else if(r == '!')
{
    printf("\n The result of \n !%d is %d \n !%d is %d  \n", m,!m,n,!n);
}

else
        printf("\n You have entered an Invalid Operation ");
break;
  case 'p':
   printf(" Solve quadratic equation \n");
   float a;
   float b;
   float c;
   float x1;
   float x2;
printf("\n");
   printf(" Program to solve quadratic equation \n ax^2+bx+c=0");
printf("\n\n");
    printf (" Enter the value of a : ");
    scanf(" %f",&a);
printf("\n");
    printf (" Enter the value of b : ");
    scanf(" %f",&b);
printf("\n");
    printf (" Enter the value of c : ");
    scanf(" %f",&c);
printf("\n");
   x1= (-b+sqrt((b*b)-(4*a*c)))/(2*a);
   x2= (-b-sqrt((b*b)-(4*a*c)))/(2*a);
   printf (" the value of X1 is: %0.2f",x1);
printf("\n");
   printf (" the value of X2 is: %0.2f",x2);
printf("\n\n");
 break;
}
    printf(" To restart the program press 1, to end the program press 0\n\n");
    scanf(" %d",&o);
    if (o==1)
    {
        goto RE;
    }
   else  if (o==0)
   {
       printf(" \t End the program \n\n");
   }
    return 0;
}
