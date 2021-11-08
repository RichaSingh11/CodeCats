/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;int sum=0;
    int sum1=0,sum2=0,sum3=0,sum4=0;
    printf("Enter the number of elements \n");
    scanf("%d",&n);
    int arr[n];
    
    printf("Enter the elements of array \n");
    
        for(int i=0;i<n;i++)
            {
            scanf("%d",&arr[i]);
            }
            
        for(int i=0;i<n;i++)
            {
                sum=sum+arr[i];
                if(arr[i]%2==0)
                    {
                       sum1=sum1+arr[i];
                    }
                else
                        sum2=sum2+arr[i];
                        
                if(i%2==0)
                {
                    sum3=sum3+arr[i];
                }
                else
                    sum4=sum4+arr[i];
                        
            }
    
    printf("Sum of all elements : %d \n",sum);
     printf("Sum of all even elements : %d \n",sum1);
      printf("Sum of all odd elements : %d \n",sum2);
       printf("Sum of all even position elements : %d \n",sum3);
        printf("Sum of all odd position elements : %d \n",sum4);
    
    
    return 0;
}


