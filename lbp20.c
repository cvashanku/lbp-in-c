#include<stdio.h>
int main()
{
	int a=1,b=1,n,i;
	scanf("%d",&n);
	int arr[n];
	arr[0]=a;
	arr[1]=b;
	for(i=2;i<n;i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
	}
	printf("%d",arr[n-1]);
	return 0;
}
