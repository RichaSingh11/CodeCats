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
    
    
    for(int i=0;i<n;i++)
        {
            int f=1;
            if(arr[i]!=-1)
            {
                for(int j=i+1;j<n;j++)
                    {
                        if(arr[i]==arr[j])
                            {
                                f++;
                                arr[j]=-1;
                            }
                    }
                         
     printf("Frequency of %d is %d",arr[i],f);  
     printf("\n");
            }
   
        }

    return 0;
}

