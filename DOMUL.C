#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i=1,n;
	printf("enter number =");
	scanf("%d",&n);
	do{
	     printf("%d * %d = %d\n",i,n,i*n);
	     i++;
	}while(i<=10);
	getch();
}