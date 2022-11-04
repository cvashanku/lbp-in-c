#include<stdio.h>
int main()
{
	int n,se=0,so=0,d;
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		if(d%2==0)
		 se=se+d;
		else
		so=so+d;
		n=n/10;
	}
	printf("%d",se*so);
	return 0;
}
