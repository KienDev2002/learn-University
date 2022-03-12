#include<stdio.h>
#include<math.h>
#include<string.h>
void in (int a[] , int n){
	int i;
	int *p=a;
	for(p=a;p<a+n;p++){
		printf("%d\t",*p);
	}
}
void swap (int *x , int *y){// hoan doi 2 so
	int stemp=*x;
	*x=*y;
	*y=stemp;
}
void bubble (int *a , int n){// sap xep noi bot
	printf("\n");
	int i,j;
	int *p=a;
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if (*(p+i)>*(p+j)){
				swap((p+i),(p+j));
			}
		}
	}
	for (p=a;p<a+n;p++){
			printf("%d\t",*p);
	}
}
void insertion (int *a , int n){// sap xep chen
	int i,j;
	int *ptr=a;
	for (i=1;i<n-1;i++){
		j=i;
		while( j<0 && *(ptr+j-1)>*(ptr+j)){
			 swap ( (ptr+j-1) , (ptr+j) );
		  	 j--;
		}
	}
	for (ptr=a;ptr<a+n;ptr++){
			printf("%d\t",*ptr);
	}
}
void selection (int *a , int n){// sap xep chon
	int i,j,min;
	int *p=a;
	for (i=0;i<n-1;i++){
		min=i;
		for (j=i+1;j<n;j++){
			if (*(p+j)<*(p+min)){
				min=j;
				swap((p+j),(p+min));
			}
		}
	}
	for (p=a;p<a+n;p++){
		printf("%d\t",*p);
	}
}
int timnhiphan (int a[] , int n){
	int i,j,x,left,right;
	int *p=a;
	left =0;
	right=n-1;
	printf("\n nhap x= ");
	scanf("%d",&x);
    int mid=(left+right)/2;
    while (left<=right){
			if (*(p+mid)==x){
				return 1;
			}else if (*(p+mid)>x){
				right = *(p+(mid-1));
			}else {
				left=*(p+(mid+1));
			}
		}
		return 0;
	}
int main(){
	int n,i=0;
	int a[n];
	int *p=a;
	printf("nhap n: ");
	scanf("%d",&n);
	for (p=&a[0];p<&a[n];p++){
		printf("a[%d]=",i);
		i++;
		scanf("%d",p);
	}
	in(a,n);
	bubble (a,n);
	printf("\n");
	insertion(a,n);
	printf("\n");
	selection(a,n);
	if (timnhiphan(a,n)==1){
		printf("\ntim thay x");
	}else{
		printf("\n khong tim thay so nhi phan");
	}
}

