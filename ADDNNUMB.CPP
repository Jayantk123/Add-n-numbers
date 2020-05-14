#include<stdio.h>
#include<conio.h>

 int main()
{
int num,b,sum=0,value;
clrscr();

printf("enter no. of integers:\n");
scanf("%d",&num);

printf("no. of integers is %d",num);

for(b=1;b<=num;b++)
{
scanf("%d",&value);
sum=sum+value;
}
printf("sum of no. is :%d",sum);
getch();
}