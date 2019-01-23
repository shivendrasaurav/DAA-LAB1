#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main()
{
	float start_t=clock();
	
    int n1, n2, i, gcd;
    srand(time(0));
    n1=rand();
    n2=rand();
    printf("First Random Number Generated : %d\nSecond Random Number Generated : %d",n1,n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    printf("\n\nG.C.D of %d and %d is %d", n1, n2, gcd);
    
	float end_t=clock();
	float total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
	printf("\n\nTime Taken To Generate Random Numbers : %f",total_t);
}
