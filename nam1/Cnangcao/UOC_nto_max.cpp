#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){

}
void uocngtomax(long long a[],int n){
	for(int i=0;i<n;i++){
		long long max;
		while(a[i]%2==0){
			max=2;
			a[i]/=2;
		}	
		for(int j=3;j<=sqrt(a[i]);j+=2){
			while(a[i]%j==0){
				a[i]/=j;
			}
			max=j;
		}
		if(a[i]>1) max=a[i];
		printf("%lld\n",max);
	}
}
