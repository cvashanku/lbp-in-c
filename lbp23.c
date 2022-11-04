#include<stdio.h>
int main()
{
   int n,d,sum=0,prod=1,temp;
   scanf("%d",&n);
   temp=n;
   if(n>=10 && n<=99)
   {
     	while(n>0)
     	{
   	     	d=n%10;
   	    	sum=sum+d;   	    	
   	      	prod=prod*d;
   	    	n=n/10;
        }
   }
   printf((sum+prod)==temp?"Yes":"No");	
	return 0;	
}
