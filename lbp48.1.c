#include<stdio.h>
int convert(char ch)
{
    return ch-48;
}
int main() {
   char s[100];
   int n1,n2;
    scanf("%s",s);
    if(s[0]=='0')
        n1=convert(s[1]);
    else
        n1=convert(s[0])*10+convert(s[1]);
    if(s[3]=='0')
        n2=convert(s[4]);
    else
        n2=convert(s[3])*10+convert(s[4]);
    printf("%d",n1*60+n2);
    return 0;
}
