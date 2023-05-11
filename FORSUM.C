#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i,n,sum=0;
	printf("enter number =");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	     sum+=i;
	     printf("%d\t",i);
	}
	printf("sum =%d",sum);
	getch();
}
