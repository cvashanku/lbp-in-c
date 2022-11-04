#include<stdio.h>
int main()
{
	int n,d,rev,temp;
	scanf("%d",&n);
	temp=n;
	rev=0;
	while(n>0)
	{
		d=n%10;
		rev=rev*10+d;
		n=n/10;
	}
	printf((rev==temp)?"yes":"no");
	return 0;
}
