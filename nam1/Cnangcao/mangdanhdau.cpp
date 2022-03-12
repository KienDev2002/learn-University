#include <stdio.h>
int main(){
	int n, a[1000], max=0, dem=0;
	int f[10000]={};
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
		f[a[i]]++;
		if (max<a[i]){
			max=a[i];
		}
	}
	for (int i=0;i<max;i++){
		if (f[a[i]]>=1){
			dem++;
		}
	}
	printf("\n %d",dem);
}
