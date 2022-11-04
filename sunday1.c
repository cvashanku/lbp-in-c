#include<stdio.h>
int main()
{
	int n,se=0,so=0,d=0,b;
	printf("enter the total bill");
	scanf("%d",&n);
	while(n!=0)
	{
		d=n%10;
	  if(d%2==0)
	   {
	   	se=se+d;
	   }
	   else
	   {
	   	so=so+d;
	   }
	   n=n/10;
    }
    b=se*so;
    printf("%d",b);
}
