#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i,n;
	printf("enter number =");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    if(i%2==1)
	    {
		printf("%d\t",i);
	    }
	}
	getch();

}