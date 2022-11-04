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
	int n1,n2,i,s=0;
	scanf("%d%d",&n1,&n2);
	for(i=n1;i<=n2;i++)
	{
		if(isprime(i))
		s=s+i;
	}
	printf("%d",s);
	return 0;
}
