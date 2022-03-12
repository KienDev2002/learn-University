#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
// 3 6 9 9 15  
// uoc 3 va 6 la a
// tim uoc a va 9 la b
// tim uoc b voi 9 la c... 
int UCLN (int a , int b){
	if (b==0)  return a;
	return UCLN(b,a%b);
}
int main(){
	int n;
	scanf("%d",&n);
	int *a = (int*)malloc(n*sizeof(int));
	for (int i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	int t = 0;
	for (int i=0;i<n;i++){
		t = UCLN (t,a[i]);
	}
	printf("\nUCLN cua mang la: %d",t);
}

