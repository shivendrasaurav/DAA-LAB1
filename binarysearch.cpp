#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

long long int max = 99999;

int main(){
	float start_t=clock();
    long long int i,j,key,a[max],flag=0,low=0,high=max,mid,temp;
    srand(time(0));
	for(i=0;i<max;i++){
    	a[i]=rand()%10000;
	}
	key=rand()%10000;
	printf("An Array Of Randomly Generated Numbers Has Been Made\n\n");
	for(i=0;i<max;i++){
		for(j=0;j<i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Randomly Generated Key Is : %d\n\n",key);

	while(low<=high){
		mid=(low+high)/2;
		if(key==a[mid]){
			flag=1;
			printf("Key Found At Position %d",mid+1);
		}
		else if(key>mid)
		    low=mid+1;
		else if(key<mid)
		    high=mid-1;
	}
	if(flag==0){
		printf("The Random Generator Generated To Many Random Keys, No Match Was Found");
	}
	float end_t=clock();
	float total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
	printf("\n\nTime Taken To Generate Random Numbers : %f",total_t);
}
