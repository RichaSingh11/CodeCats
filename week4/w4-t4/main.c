/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     int n; int target; 
    printf("Enter the size of the array: ");
    scanf("%d",&n);
     int arr[n];
     printf("Enter the Target: ");
     scanf("%d",&target);
    
    printf("Enter the elements of the array in sorted form: ");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            printf("Output: %d %d",i,j);
            
        }
    }

    return 0;
}

