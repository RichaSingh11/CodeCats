/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;int x;
    int c, first, last, middle;
    
    printf("Enter the size of the array: ");
    scanf("%d",&n);
     int arr[n];
    
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    
     printf("Enter element to be searched:");
    scanf("%d",&x);


  first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last) {
    if (arr[middle] < x)
      first = middle + 1;
    else if (arr[middle] == x) {
      printf("%d found at location %d.\n", x, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf(" %d found! at %d \n", x, first);
    
    return 0;
}
