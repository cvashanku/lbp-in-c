int max(int,int,int);
int min(int,int,int);
int maxd(int);
#include <stdio.h>

int main()
{
    int x,y,z;
    int u,t,h,th;
    scanf("%d %d %d",&x,&y,&z);
    u=min(x%10,y%10,z%10);
    t=min((x/10)%10,(y/10)%10,(z/10)%10);
    h=min(x/100,y/100,z/100);
    th=max(maxd(x),maxd(y),maxd(z));
    printf("%d",th*1000+h*100+t*10+u*1);
    return 0;
}
int max(int a,int b,int c)
{
    if(a>=b && a>=c)
    {
        return a;
    }
    else if(b>=a && b>=c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int min(int a,int b,int c)
{
    if(a<=b && a<=c)
    {
        return a;
    }
    else if(b<=a && b<=c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int maxd(int n)
{
    int max=0,d;
    
    while(n!=0)
    {
     d=n%10;
     if(d>max)
     {
         max=d;
     }
     n=n/10;
    }
    return max;
}
