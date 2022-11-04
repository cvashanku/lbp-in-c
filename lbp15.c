#include<stdio.h>
int main()
{
	int n,d,flag=0;
	scanf("%d",&n);
	while(n!=0)
	{
		d=n%10;
		if(d==0)
		{	
		flag=1;
		break;
    	}
		n=n/10;
	}
	printf((flag==1)?"yes":"no");
	return 0;
}
