#include<stdio.h>
int main()
{
	int i,j,k,s;
	scanf("%d%d%d",&i,&j,&k);
	s=0;
	while(i<=j)
	{
		s=s+(i++);
	}
	while(j!=k)
	{
		s=s+(--j);
	}
	printf("%d",s);
	return 0;
}
