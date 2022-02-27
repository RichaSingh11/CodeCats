/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     int n; int k; int temp=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
     int arr[n];
     printf("Enter the number of rotations ");
     scanf("%d",&k);
    
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    
    for(int j=0;j<k;j++)
    {
        
      temp=arr[n-1];
        
    for(int i=n-1;i>0;i--)
    {
       arr[i]=arr[i-1];
    }
     
        arr[0]=temp;
     
    }
    
       
    
    printf("Array after rotation :");
    for(int i=0;i<n;i++)
        {
            printf("%d",arr[i]);
        }

    return 0;
}
