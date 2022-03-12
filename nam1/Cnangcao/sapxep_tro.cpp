#include<stdio.h>
#include<math.h>
#include<string.h>
void nhapin (int n , int *a){
	int i=0;
	int *p=a;
	for (p=&a[0];p<&a[n];p++){
		printf("a[%d]= ",i);
		scanf("%d",p);
		i++;
	}
	for (p=a;p<a+n;p++){
		printf("%d\t",*p);
	}
}
void swap (int *x, int *y){
	int stemp=*x;
	*x=*y;
	*y=stemp;
}
void selection (int n , int a[]){
	int i,min,j;
	int *p=a;
	for(i=0;i<n-1;i++){
		min=i;
		for (j=i+1;j<n;j++){
			if (*(p+min)>*(p+j)){
				min=j;
				swap(p+min,p+i);
			}
		}
	}
	for (p=a;p<a+n;p++){
		printf("%d\t",*p);
	}
}
void insertion (int n , int *a){
	int i,j;
	int *p=a;
	for (i=1;i<n;i++){
		j=i;
		while (j>0&&*(p+j)<*(p+i-1)){
			swap(p+j,p+i-1);
			j--;
		}
	}
	for (p=a;p<a+n;p++){
		printf("%d\t",*p);
	}
}
int main(){
	int n;
	printf("n: ");
	scanf("%d",&n);
	int a[n];
	nhapin(n,a);
	printf("\n");
	selection(n,a);
	printf("\n");
	insertion(n,a);
}

