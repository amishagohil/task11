#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i=2000,n;
	printf("enter leap number =");
	scanf("%d",&n);
	do{
	    if(i%4==0)
	    {
		printf("%d\t",i);
	    }
	    i++;
	 }while(i<=n);
	 getch();
}