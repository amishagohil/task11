#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i,n;
	printf("enter number =");
	scanf("%d",&n);
	for(i=2000;i<=n;i++)
	{
	     if(i%4==0)
	     {
		 printf("%d\t",i);
	     }
	}
	getch();
}