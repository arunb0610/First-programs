#include <stdio.h>
int a ;
int b;
int add (int,int);
int main()
    {
    int c;
    printf("\n Enter the value for a :\n");
    printf("\n Enter the value for b :\n");
    scanf("%d",&a);
    scanf("%d",&b);    
    c = add(a,b);
    printf("\n Sum of %d + %d = %d",a,b,c);
    }

