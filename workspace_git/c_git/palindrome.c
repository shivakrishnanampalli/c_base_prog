#include<stdio.h>

int main()
{
	int a;
	printf("enter the no ");
	scanf("%d",&a);
	int k=a;
	int rev=0;
	while(a>0)
	{
		int rem=a%10;
		rev=rev*10+rem;
		a=a/10;
	}
	if(k==rev)
	{
		printf("palindrome");
	}
	else
	{
		printf("not poli");
	}
}
