/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   long int n;
    int G,T,Initial,final;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&G);
        while(G--)
        {
            scanf("%d%ld%d",&Initial,&n,&final);
            if(n%2==0 || Initial==final)
                printf("%ld\n",n/2);
            else
                printf("%ld\n",n/2+1);

        }
    }
    return 0;
}
