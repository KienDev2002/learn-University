#include<stdio.h>
#include<math.h>
void chuyenheso (int n , int A[100]){
	int dem=0;
	for (int i=1;n;i++){
		A[i]=n%2;
		n/=2;
		dem++;	
	}
	for (int i=dem;i>0;i--){
		printf("%d",A[i]);
	}
}
int timnt (int n){
	int i;
	if (n<2){
		return 0;
	}else{
	for (i=2;i<(n);i++){
		if (n%i==0){
			return 0;
		}
	}
	return 1;
}
}
void nnt (int n){
	printf("\n %d so nt dau tien la: ",n);
	int dem=0;
	for (int i=2;;i++){
		if(timnt(i)==1){
			printf("%d\t",i);
			dem++;
			if(dem==n){
				break;
			}
		}
	}
}
int main(){
	int n;
	int A[100];
	printf("nhap n: ");
	scanf("%d",&n);
	chuyenheso (n,A);
	timnt(n);
	nnt(n);
}
