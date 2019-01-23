#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main(){
	float start_t=clock();
	int i,j,n,sq;
	srand(time(0));
	n=rand()%1000;
	printf("Randomly Generated Number Is : %d",n);
	printf("\nPrime Numbers From 0 To %d Are : ",n);
	sq=sqrt(n);
	long int a[n*n];
	for(i=0;i<n;i++)
	    a[i]=i;
	for(i=2;i<sq;i++){
		for(j=i;j<n;j++){
			a[i*j]=0;
		}
	}
	for(i=2;i<n;i++){
		if(a[i]!=0){
		  printf("%d, ",a[i]);
		  Sleep(100);
		}
	}
	float end_t=clock();
	float total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
	printf("\n\nTime Taken To Generate Random Numbers : %f",total_t);
}
