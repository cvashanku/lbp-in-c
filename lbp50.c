#include<stdio.h>
int sumofdigits(int n)
{
    int s=0,d;
    while(n!=0)
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }
    return s;
}
int main() {
    int n1,n2,s=0,i;
    scanf("%d %d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        s=s+sumofdigits(i);
    }
    printf("%d",s);
    return 0;
}
