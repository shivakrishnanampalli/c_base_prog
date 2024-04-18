#include<stdio.h>

int main()
{
	int a,ori=0;
	printf("enter the number ");
	scanf("%d",&a);
	int m=a;
	
	do
	{
		ori=ori*10+a%10;
		a/=10;
	}while(a>0);
	printf("reversed=%d \n",ori);
		
	return 0;
}
