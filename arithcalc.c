/*arithmetic calculator*/
#include<stdio.h>
#include<conio.h>
void main()
{
int option;
float a,b,result;
printf("enter two values : \n");
scanf("%f%f",&a,&b);
printf("\n 1. Addition (+) ");
printf("\n 2. Substraction (-) ");
printf("\n 3. Multiplication (×) ");
printf("\n 4. Division (÷) ");
printf("\n choose your option");
scanf("%d",&option);
switch(option)
{
case 1 : result = a+b ; break;
case 2 : result = a-b ; break;
case 3 : result = a*b ; break;
case 4 : result = a/b ; break;
default: printf("choose correct option");
}
printf("result is %f",result);
getch();
}
 /*End of program*/