#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int max(int a,int b,int c){
    return (a>b && a>c)?a:(b>c)?b:c;
}
int min(int a,int b,int c){
    return (a<b && a<c)?a:(b<c)?b:c;
}
int maxD(int n){
    int m=0,d;
    while(n!=0){
        d=n%10;
        if(m<d)
            m=d;
        n=n/10;
    }
    return m;
}
int main() {
    int n1,n2,n3,w,x,y,z;
    scanf("%d %d %d",&n1,&n2,&n3);
    w = min(n1%10,n2%10,n3%10);
    x = min((n1/10)%10,(n2/10)%10,(n3/10)%10);
    y = min(n1/100,n2/100,n3/100);
    z = max(maxD(n1),maxD(n2),maxD(n3));
    printf("%d",z*1000+y*100+x*10+w*1);
    return 0;
}

