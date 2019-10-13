#include<stdio.h>
int main()
{
    printf("Enter two numbers\n");
    int a ,b;
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Numbers after swapping are %d %d\n",a,b);
}
