#include<stdio.h>
int main()
{
	int year;
	scanf("%d",&year);
	if((year%100!=0&&year%4==0)||(year%400==0))
	printf("leaf year");
	else
	printf("not leaf year");
	return 0;
}
