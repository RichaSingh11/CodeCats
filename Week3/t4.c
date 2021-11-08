/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int count;
    int n;

    printf("Enter thr number of elements: ");
    scanf("%d", &n);

    count = 2*n- 1;

    for(int i=1; i<=count; i++)
    {
        for(int j=1; j<=count; j++)
        {
            if( j==i||( j==count-i+1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

       
    return 0;
}

