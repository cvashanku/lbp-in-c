#include<stdio.h>
int isprime(int n)
{
	int f=0,i;
	for(i=1;i<=n;i++)
	{
	   if(n%i==0)
		f++;
	}
	return f==2;
}
int main()
{
	int n;
	scanf("%d",&n);
	while(1)
	{
		if(isprime(n))
		{
			printf("%d",n);
			break;
		}
		n++;
	}
	return 0;
}
