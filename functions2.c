#include <stdio.h>
 

int p(int n, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (n % i == 0)
       {
         return 0;
       }
       else
       {
         return p(n, i - 1);
       }       
    }
}
 
int main()
{
    int n, check;
    printf("Enter a number: ");
    scanf("%d", &n);
    check = p(n, n / 2);
    if (check == 1)
    {
        printf("Entered Number %d is prime \n", n);
    }
    else
    {
        printf("Entered Number %d is not prime \n", n);
    }
    return 0;
}
 
