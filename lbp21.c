#include<stdio.h>
int main()
{
	int n,d,sum;
	scanf("%d",&n);
	sum=0;
	while(n!=0)
	{
		d=n%10;
		if(d==2||d==3||d==5||d==7)
		{
			sum=sum+d;
		}
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}
