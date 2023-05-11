#include<stdio.h>
#include<conio.h>
void
main()
{
	clrscr();
	int i=1,n;
	printf("enter number=");
	scanf("%d",&n);
	do{
	   printf("%d\n",i);
	   i++;
	}while(i<=n);
	getch();
}
