#include<stdio.h>
#include<conio.h>
void
main()
{
	clrscr();
	int i=1,n,fact=1;
	printf("enter number =");
	scanf("%d",&n);
	do{
	     fact*=i;
	     i++;
	}while(i<=n);

	printf("fact =%d",fact,n);

	getch();
}
