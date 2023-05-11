#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i,n;
	printf("enter number =");
	scanf("%d",&n);
	for(i=1;i<=n;n--)
	{
	    if(n%2==0)
	    {
		 printf("%d\t",n);
	    }
	}
	getch();
}