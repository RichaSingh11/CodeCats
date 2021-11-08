/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     int n;
    printf("Enter the number of elements \n");
    scanf("%d",&n);
    int arr[n];
    int lg=arr[0];int sm=arr[0];
    
    printf("Enter the elements of array \n");
    
        for(int i=0;i<n;i++)
            {
            scanf("%d",&arr[i]);
            }
            
        for(int i=0;i<n;i++)
            {
                if(arr[i]>lg)
                 lg=arr[i];

                if(arr[i]<sm)
                 sm=arr[i];
                
            }
            
    printf("Largest element is : %d \n",lg);
    printf("Smallest element is : %d \n",sm);

    return 0;
}

