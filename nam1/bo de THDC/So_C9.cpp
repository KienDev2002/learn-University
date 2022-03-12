#include<stdio.h>
#include<math.h>

int main(){
	int i=1,n,j,x,A[100];
	printf("nhap n: ");
	scanf("%d",&n);
	while (i<=n){
		int kt=1;
		printf("vui long nhap: ");
		scanf ("%d",&x);
		for (j=1;j<i;j++){
			if (x==A[j]){
				kt=0;
				break;
			}
		}
		if (kt==1){
			A[i]=x;
			i++;
		}else{
			printf("\nvui long nhap lai , vi trung voi gia tri truoc: \n");
		}
	}
	for (i=1;i<=n;i++){
		printf("%d\t",A[i]);
	}
	printf("\n tat ca cac cap 2 so bat ky = 10 la: ");
	for (i=1;i<n;i++){
		for (j=i+1;j<=n;j++){
			if ((A[i]+A[j])==10 ){
				printf("\n %d %d",A[i],A[j]);
			}
		}
	}
}
