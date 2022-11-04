#include<stdio.h>
int main()
{
	int sc;
	scanf("%d",&sc);
	if(30<=sc<=100)
	{
	  if(sc>=30 && sc<=50)
		printf("d");
		else if(sc>=51 && sc<=60)
		printf("c");
     	else if(sc>=61 && sc<=80)
		printf("b");
		else
		printf("a");
	}
	return 0;
}
