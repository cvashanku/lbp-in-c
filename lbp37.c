#include<stdio.h>
int main() {
    char s[100];
    int i;
    scanf("%s",s);
    for(i=0;s[i];i++)
    {
        if(s[i]>='a' && s[i]<='z')
            printf("%c",s[i]-32);
        else if(s[i]>='A' && s[i]<='Z')
            printf("%c",s[i]+32);
    }
    return 0;
}

