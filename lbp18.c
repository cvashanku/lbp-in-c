#include<stdio.h>
#include<string.h>
int main()
{
	char month[10];
	int day;
	scanf("%s",month);
	scanf("%d",&day);
    printf("%d",(strcmp(month,"july")==0 && day==5) ?1:0);
	return 0;
}
