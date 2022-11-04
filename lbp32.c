#include<stdio.h>
int main() {
    char s[100];
    int i,c=0;
    scanf("%[^\n]s",s);
    for(i=0;s[i];i++)
    {
        if((s[i]>='a' && s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0' && s[i]<='9'))
            continue;
        else
            c++;
    }
    printf("%d",c);
    return 0;
}
