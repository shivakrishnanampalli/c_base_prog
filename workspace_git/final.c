#include<stdio.h>

int main()
{
	int cnt;
	for(int i=1;i<100;i++)
	{
		cnt=0;
		for (int j=1;j<100;j++)
		{
			if(i%j==0)
			{
				cnt++;
			}
		}
		if(cnt==2)
		{
			printf("%d",i)
		}
	}
}
