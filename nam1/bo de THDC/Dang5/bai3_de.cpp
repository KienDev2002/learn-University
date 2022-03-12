#include<stdio.h>
#include<math.h>
#include<string.h>
struct Sach {
	char TenSach[50];
	char TacGia[50];
	long NamXuatBan;
	long SoLuongSach;
};
void nhapin (int n , Sach A[100]){
	printf("nhap danh sach sach la: ");
	int i;
	for (i=1 ; i<=n ; i++){
		printf("\nTen sach thu %d la: ",i);
		fflush(stdin);
		gets(A[i].TenSach);
		printf("Tac gia sach thu %d la: ",i);
		fflush(stdin);
		gets(A[i].TacGia);
		printf("Nam xuat ban sach thu %d la: ",i);
		fflush(stdin);
		scanf("%li",&A[i].NamXuatBan);
		printf("So luong sach thu %d la: ",i);
		fflush(stdin);
		scanf("%li",&A[i].SoLuongSach);
	}
	printf("\n %5s %20s %20s %16s %6s","STT","Ten Sach","Tac Gia","Nam Xuat Ban","So Luong Sach");
	for (i=1 ; i<=n ; i++){
			printf("\n %5d %20s %20s %16li %6li",i,A[i].TenSach,(A[i].TacGia),A[i].NamXuatBan,A[i].SoLuongSach);
	}
}
void kt (int n , Sach A[100]){
	int i,dem=0;
	char ten[50];
	printf("\n nhap ten 1 cuon sach: ");
	fflush(stdin);
	gets(ten);
	for (i=1;i<=n;i++){
		if (strcmpi ( A[i].TenSach , ten) ==0){
			dem++;
		}
	}
	if (dem==0){
		printf("sach do khong co trong danh sach ");
	}else{
		printf("sach do co trong danh sach");
	}
}
void thongke (int n , Sach A[100]){
int f[10000]={},max=0;
  for (int i=1;i<=n;i++){
  	f[A[i].NamXuatBan]=f[A[i].NamXuatBan]+A[i].SoLuongSach;
  	if (A[i].NamXuatBan>max){
  		max=A[i].NamXuatBan;
	  }
  }
  for (int i=1;i<=max;i++){
  	if (f[A[i].NamXuatBan] >=1){
  		printf("\n so luong sach nam %li la: %d",A[i].NamXuatBan,f[A[i].NamXuatBan]);
	  	}
  	}
}
//	int f[99999]={},max=0;
//	for(int i=1;i<=n;i++){
//		f[A[i].NamXuatBan]=f[A[i].NamXuatBan]+A[i].SoLuongSach;
//		if(A[i].NamXuatBan>max){
//			max=A[i].NamXuatBan;
//		}
//	}
//	for(int i=1;i<=max;i++){
//		if(f[A[i].NamXuatBan]>=1){
//			printf("\n%d",f[A[i].NamXuatBan]);
//		}
//	}
//}
void tim (int n , Sach A[100] ,char ten[50]){
	int i;
	printf("\nten sach cua tac gia %10s la: ",ten);
	for (i=1;i<=n;i++){
		if (strcmpi(A[i].TacGia,ten)==0){
			printf("%10s\t",A[i].TenSach);
		}
	}
}
void ba (int n , Sach A[100]){
	printf("\n 3 cuon sach co so luong nhieu nhat la: ");
	printf("\n %5s %20s %20s %16s %6s","STT","Ten Sach","Tac Gia","Nam Xuat Ban","So Luong Sach");
	int i,j;
	for (i=1;i<n;i++){
		for(j=i+1;j<=n;j++){
			if (A[i].SoLuongSach < A[j].SoLuongSach){
				Sach stemp =A[i];
				A[i]=A[j];
				A[j]= stemp;
			}
		}
	}
	for (i=1;i<4;i++){
			printf("\n %5d %20s %20s %16li %6li",i,A[i].TenSach,(A[i].TacGia),A[i].NamXuatBan,A[i].SoLuongSach);
	}
}
void sapxep ( int n , Sach A[100]){
	    int i,j;
	    for (i=1;i<n;i++){
	    	for (j=i+1;j<=n;j++){
	    		if ( strcmpi (A[i].TacGia, A[j].TacGia)>0 ){
	    			Sach stemp1 =A[i];
					A[i]=A[j];
					A[j]= stemp1;
				}
			}
		}
		for (i=1;i<=n;i++){
			printf("\n %5d %20s %20s %16li %6li",i,A[i].TenSach,(A[i].TacGia),A[i].NamXuatBan,A[i].SoLuongSach);
	}
	}
int main(){
	int n;
	Sach A[100];
	printf("nhap n sach= ");
	scanf("%d",&n);
	nhapin (n,A);
	char ten[50];
	printf("\nnhap mot tac gia: ");
	fflush(stdin);
	gets(ten);
	kt(n,A);
	tim (n,A,ten);
	ba(n,A);
	sapxep(n,A);
	thongke(n,A);
}

