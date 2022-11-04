#include<stdio.h>
int main()
{
	int x,y,i,sum=0;
	scanf("%d",&x);
	scanf("%d",&y);
	for(i=x;i<=y;i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
	}
	printf("%d",sum);
	return 0;
}
