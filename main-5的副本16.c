/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   
    int  iNumber1=3;
    int  iNumber2=2;
    int  iRerultpreA,iRerultastA;
    int  iRerultpreD,iRerultastD;
    iRerultpreA=++iNumber1;
    iRerultastA=iNumber2++;
    printf ("the Addself...\n");
    printf("the iNumber1 is :%d\n",iNumber1);
    printf("the iRerultpreA is:%d\n",iRerultpreA);
    printf ("the iNumber2is :%d\n",iNumber2);
    printf("the iRerultastA is :%d\n",iRerultastA);
    
  iNumber1=3;
  iNumber2=2;
  iRerultpreA,iRerultastA;
     iRerultpreD,iRerultastD;
    iRerultpreD=--iNumber1;
    iRerultastD=iNumber2--;
    printf ("the Addself...\n");
    printf("the iNumber1 is :%d\n",iNumber1);
    printf("the iRerultpreA is:%d\n",iRerultpreD);
    printf ("the iNumber2is :%d\n",iNumber2);
    printf("the iRerultastA is :%d\n",iRerultastD);
    
    return 0;
}
