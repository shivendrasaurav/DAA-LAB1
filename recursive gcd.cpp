#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>


int hcf(int n1, int n2);
int main()
{
   float start_t=clock();
   int n1, n2;
    srand(time(0));
    n1=rand();
    Sleep(500);
    n2=rand();
    Sleep(500);
    printf("First Random Number Generated : %d\nSecond Random Number Generated : %d",n1,n2);

   printf("\n\nG.C.D of %d and %d is %d.", n1, n2, hcf(n1,n2));
   float end_t=clock();
   float total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
   printf("\n\nTime Taken To Calculate GCD : %f",total_t);
}

int hcf(int n1, int n2)
{
    if (n2 != 0)
       return hcf(n2, n1%n2);
    else 
       return n1;
}
