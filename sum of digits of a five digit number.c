#include<stdio.h>
int main()
{
    int a,b,s=0;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        s=s+b;
        a=a/10;
    }
    printf("%d",s);
}
