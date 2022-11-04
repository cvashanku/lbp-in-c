#include<stdio.h>
#include<string.h>

int main()
{
	char s[100];
	int low,high,flag;
	scanf("%s",s);
	flag=1;
	low=0;
	high=strlen(s)-1;
	while(low<=high)
	{
		if(s[low]!=s[high])
		{
			flag=0;
			break;
		}
		low++;
		high--;
	}
	printf((flag==1)?"valid":"invalid");
	return 0;
}
