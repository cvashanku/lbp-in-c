#include<stdio.h>
int main() 
{
    int d,m,y;
    scanf("%d%d%d",&d,&m,&y);
    if(y%10==m*d||y%100==m*d||y%1000==m*d)
        printf("true");
    else
        printf("false");
    return 0;
}
