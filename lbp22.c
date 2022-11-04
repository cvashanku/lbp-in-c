#include<stdio.h>
int main()
{
	int n,d,temp,sum;
	scanf("%d",&n);
	sum=0;
	temp=n;
	while(n>0)
	{
		d=n%10;
		sum=sum+d;
		n=n/10;
	}
	if(temp%sum==0)
	 printf("Yes");
	 else
	 printf("No");
	return 0;
}
