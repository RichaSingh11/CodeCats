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
    printf("Enter the size of the array: ");
    scanf("%d",&n);
     int arr[n];
    
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    printf("The reverse Array is: ");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d",arr[i]," ");
    }

    return 0;
}

