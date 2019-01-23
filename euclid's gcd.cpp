#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main(){
	float start_t=clock();
    int m, n, p, q;
    srand(time(0));
    n=rand();
    q=n;
    Sleep(500);
    m=rand();
    p=m;
    Sleep(500);
    printf("First Random Number Generated : %d\nSecond Random Number Generated : %d",m,n);
    while (n > 0)
    {
        int r = m % n;
        m = n;
        n = r;
    }
    printf ("\n\nGCD of %d and %d is = %d \n",p,q,m);
	float end_t=clock();
	float total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
	printf("\n\nTime Taken To Calculate GCD : %f",total_t);
}
