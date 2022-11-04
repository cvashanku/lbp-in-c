#include<stdio.h>
int main()
{
	int n,m,d1,d2;
	scanf("%d",&n);
	d1=n%10;
	d2=(n/10)%10;
	m=(d1+d2)+(d1*d2);
	printf((n==m)?"Yes":"No");
	return 0;
}
