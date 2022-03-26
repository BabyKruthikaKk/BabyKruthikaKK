#include<stdio.h>
int main()
{
int a,b;
float c;
char op;
printf ("enter two numbers");
scanf("%d %d",&a,&b);
printf("enter choice");
printf("+ for addition");
printf("- for subtraction");
printf("* for mutiplication");
printf("/ for division");
printf("mod for remainder");
scanf(" %c",&op);
if (op =='+')
{
c=a+b;
}
else if (op =='-')
{
c =a-b;
}
else if (op == '*')
{
c =a*b;
}
else if (op == '/')
{
if (b==0)
{
printf("enter non zero number");
}
else
{
c=a/b;
}
}
else if (op=='%')
{
if (b==0)
{
printf ("enter non zero number");
}
else
{
c=a%b;
}
}
else
{
printf("give correct choice");
}
printf("output is %f",c);
return 0;
}

