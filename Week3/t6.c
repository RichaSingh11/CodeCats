/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;int num=0;
    int c=0;
    printf("Enter the number of elements \n");
    scanf("%d",&n);
    int arr[n];
    
    printf("Enter the elements of array \n");
    
        for(int i=0;i<n;i++)
            {
            scanf("%d",&arr[i]);
            }
            
        printf("Enter the number whose frequency is to be checked \n");
        scanf("%d",&num);
        for(int i=0;i<n;i++)
            {
                if(num==arr[i])
                c++;
            }
    
        printf("Frequency of %d is : %d",num ,c);
    

    return 0;
}
