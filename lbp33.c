#include<stdio.h>
int main() {
    int n,d,s=0;
    scanf("%d",&n);
    s=0;
    while(n!=0){
        d=n%10;
        if(d%2!=0)
            s=s+d;
        n=n/10;
    }
    printf("%d",s);
    return 0;
}

