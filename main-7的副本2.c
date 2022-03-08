#include<stdio.h>
int  main ()
{       
    int a=10,b=20,c=30,x;
    x=a=b+c,b*a,c-b;
    printf ("x=%d\na=%d\nb=%d\nc=%d\n",x,a,b,c);
    return 0;
}
