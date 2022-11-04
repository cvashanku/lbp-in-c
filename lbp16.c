#include<stdio.h>
int main()
{
	int n,d,key,c;
	scanf("%d",&n);
	scanf("%d",&key);
	c=0;
	while(n!=0)
	{
		d=n%10;
		if(d==key)
		c++;
		n=n/10;
	}
	printf("%d",c);
	return 0;
}
