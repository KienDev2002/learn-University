#include<stdio.h>
#include<math.h>
void tongx (int n , int A[100] , long x);
void TBN (int n , int A[100]);
int main(){
	//in ra man hinh 2 so khong bi trung nhau
	long x1;
	int n, A[100], x, i = 1;
		printf("Nhap so phan tu: ");
		scanf("%d", &n);
	while(i <= n){
	printf("Moi ban nhap phan tu thu %d: ", i);
	scanf("%d", &x);
	int ok = 1;
	for(int j = 1; j <=i; j++){
			if(x == A[j]){
				ok = 0;
				break;
			}
		}
	if(ok == 1){
		A[i] = x;
		i++;
	}
	else{
	printf("Phan tu da ton tai.\n");
	}
}
	for(int i = 1; i <= n; i++){
	printf("%d ", A[i]);
}
	printf("\nnhap x1=");
	scanf ("%d",&x1);
	tongx(n,A,x1);
	TBN (n,A);
}
//dem cac ptu co tong bang x
void tongx (int n , int A[100] , long x1){
	int i,j;
	int dem=0;
	for (i=1 ; i<=n ; i++){
		for (j=i+1; j<n ; j++){
			if (A[i]+A[j]==x1){
				dem++;
			}
		}
	}
	if (dem==0){
		printf("\n khong co cap tong nao bang x1");
	}else{
		printf("\n co %d cap tong bang x1",dem);
	}
}
//TBN cac ptu chia cho 3 du 1
void TBN (int n , int A[100]){
	int i;
	int S=1;
	int d=0;
	for (i=1 ; i<=n; i++){
		if (A[i]%3==1){
			d++;
			S=S*A[i];
		}
	}
	if (d==0){
		printf("\nkhong co phan tu nao chia cho 3 du 1:");
	}else{
		float kq=pow(S,(1.0/d));
		printf("\nTBN= %0.2f",kq);
	}
}











