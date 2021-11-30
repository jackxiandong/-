/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   
    int iCelsius,iFahrenheit;
    printf ("Please enter tempeerature:\n");
    scanf ("%d",&iFahrenheit);
    iCelsius=5*(iFahrenheit-32)/9;
    
    printf ("tempeerature is:");
    printf ("%d",iCelsius);
    printf("degrees Celsius\n");
    
    return 0;
}
