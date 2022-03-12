#include <stdio.h>
#include <math.h>
#include<limits.h>
int main(){
	FILE *f,*f1;
	int n;
	float a[99],tong=0,max=INT_MIN;
	f=fopen("dayso.txt","r");
	fscanf(f,"%d",&n);
	for(int i=1;i<=n;i++){
		fscanf(f,"%f",&a[i]);
		tong=tong+a[i];
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("Sum= %0.2f\n",tong);
	printf("Max= %0.2f",max);
	f1=fopen("output.txt","w");
	fprintf(f1,"Sum= %0.2f\n",tong);
	fprintf(f1,"Max= %0.2f",max);
}

