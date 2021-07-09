#include<stdio.h>
#include<conio.h>
void main()
{
	int a[15],i,j=1,n,val,pos=-1;
	clrscr();
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=1;i<=n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("ARRAY\n");
	for(i=i;i<=n;i++)
	{
	printf("%d",a[i]);
	}
	printf("enter the element to find\n");
	scanf("%d",&val);
	while(j<=n)
	{
	if(a[j]==val)
	{
	pos=j;
	printf("%d found at location %d",val,pos);
	}
	j=j+1;
	}
	if(pos==-1)
	printf("value is absent in array");
	getch();
	}