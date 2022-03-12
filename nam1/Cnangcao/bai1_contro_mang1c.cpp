#include<stdio.h>
#include<math.h>
#include<string.h>
void in (int *a , int n){
	int i;
	int *p;
	p=a;
	for (i=0;i<n;i++){
		printf("%d\t",*(p+i));
	}
//	for (i=0;i<n;i++){
//		*(p+i)+=5;
//	}
//	for (i=0;i<n;i++){
//		printf("%d\t",*(p+i));
//	}
}
int tinh (int a[] , int n){
	int i,S=0;
	int *p=a;
	for (i=0;i<n;i++){
		S+=*(p+i);
	}
	return S;
}
int tinh2(int *a, int n){
	int *p=a;
	int i,s=0;
	while (n--){
		s+=*a++;
	}
	return s;
}
int kt (int *a , int n){
	int i;
	int *p=a;
	if (n%2==0){
			for (p=a;p<a+i/2;p++){
				if (*(p+i)!=*(p+n-1-i)) return 0;
		}
		return 1;	
	}else{
	 return 0;
	}
}
int main(){
  int i,n,a[n];
  int *p=a;
  printf("nhap n: ");
  scanf("%d",&n);
  for(i=0;i<n;i++){
  	printf("a[%d]= ",i);
  	scanf("%d",&p[i]);
  	}
  	in (a,n);
  	printf("\nS= %d",tinh(a,n));
  	if (kt(a,n)==1){
  		printf("\n mang co doi xung");
	  }else{
	  	printf("\n mang khong doi xung");
	  }
	printf("\nS= %d",tinh2(a,n));
}

