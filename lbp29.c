#include<stdio.h>
int main()
{
	int n,i,f;
	scanf("%d",&n);
	f=0;
	if(n>1)
	{
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			f++;
		}
		printf((f==2)?"true":"false");
	}	
	return 0;
}
