#include<stdio.h>
int main() {
    int n,d,s=0;
    scanf("%d",&n);
    while(n!=0){
        d=n%10;
        if(d==4||d==6||d==8||d==9)
            s=s+d;
        n=n/10;
    }
    printf("%d",s);
    return 0;
}

