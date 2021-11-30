/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{   int iNumber1,iNumber2,iNumber3,iResult=0;
    iNumber1=5;
    iNumber2=6;
    iNumber3=9;
    
    iResult=iNumber1+iNumber2-iNumber3;
    printf ("the result is :%d\n",iResult);
    iResult=iNumber1+iNumber2*iNumber3;
    printf ("the result is :%d\n",iResult);
    iResult=(iNumber1+iNumber2)*iNumber3;
    printf ("the result is :%d\n",iResult);
    
    return 0;
}
