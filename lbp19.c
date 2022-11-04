#include<stdio.h>
int main()
{
	int n,d,i,arr[10];
	printf("enter a number:");
	scanf("%d",&n);
	i=0;
	while(n!=0)
	{
		d=n%2;
		arr[i++]=d;
		n=n/2;
	}
	for(i=i-1;i>=0;i--)
	printf("%d",arr[i]);
	return 0;
}
