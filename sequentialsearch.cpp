#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

long long int max = 99999;

int main(){
	float start_t=clock();
    long long int i,key,a[max],flag=0;
    srand(time(0));
	for(i=0;i<max;i++){
    	a[i]=rand()%10000;
	}
	key=rand()%10000;
	printf("An Array Of Randomly Generated Numbers Has Been Made\n\n");
	printf("Randomly Generated Key Is : %d\n\n",key);
	for(i=0;i<max;i++){
		if(a[i]==key){
			flag=1;
			printf("Element Found At Position %d\n",i+1);
			Sleep(100);
		}
	}
	if(flag==0){
		printf("The Random Generator Generated To Many Random Keys, No Match Was Found");
	}
	float end_t=clock();
	float total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
	printf("\n\nTime Taken To Generate Random Numbers : %f",total_t);
}
