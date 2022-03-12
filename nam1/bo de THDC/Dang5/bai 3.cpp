#include<stdio.h>
#include<math.h>
#include<string.h>
struct Sach {
	char TenSach[50];
	char TacGia[50];
	long NamXuatBan;
	long SoLuongSach;
};
void nhapin (int n , Sach A[100]);
void nam (int n , Sach A[100]);
void tim (int n , Sach A[100],char ten[12]);
void thongke (int n , Sach A[100],long namxuatban);
void tacgia (int n , Sach A[100], char tac[50]);
void sachmax (int n , Sach A[100]);
void sapxep(int n, Sach A[100]);
void cungho (int n , Sach A[100]);
int main(){
	int n;
	Sach A[100];
	long namxuatban;
	char tac[50];
	char ten[12];
	printf("nhap n sach= ");
	scanf("%d",&n);
	printf("nhap ten 1 cuon sach: ");
	fflush(stdin);
	gets(ten);
	printf("\nnhap nam xuat ban cua cuon sach can thong ke so luong la: ");
	fflush(stdin);
	scanf("%li",&namxuatban);
	printf("\nnhap  1 tac gia la: ");
	fflush(stdin);
	gets(tac);
	nhapin (n,A);
	nam (n,A);
	tim (n,A,ten);
	thongke (n,A,namxuatban);
	tacgia (n,A,tac);
	sachmax(n,A);
   sapxep(n,A);
    cungho(n,A);
}
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
void nam (int n , Sach A[100]){
	int i;
	int luui;
	long min = A[1].SoLuongSach;
	for (i=1 ; i<=n ; i++){
		if (A[i].SoLuongSach<min){
			min = A[i].SoLuongSach;
			luui=i;
		}
	}
	printf("\nnam xuat ban co so sach it nhat la: %li",A[luui].NamXuatBan);
}
void tim (int n , Sach A[100],char ten[12]){
	int i,dem=0;
	for (i=1 ; i<=n ; i++){
		if (strcmp(A[i].TenSach,ten)==0){
            dem++;
		}
	}
	if (dem==0){
		printf("\n sach vua nhap do khong co trong danh sach");
	}else{
		printf("\n sach vua nhap do co trong danh sach");
	}
}
void thongke (int n , Sach A[100],long namxuatban){
	printf("\n so luong sach nam %li la: ",namxuatban);
	int i;
	long S=0;
	for (i=1 ; i<=n ; i++){
		if (A[i].NamXuatBan==namxuatban){
		   S=S+A[i].SoLuongSach;
		}
	}
	printf("%li",S);
}
void tacgia (int n , Sach A[100], char tac[50]){
	int i;
	printf("\n tat ca cac ten sach co ten tac gia %6s la: ",tac);
	for (i=1 ; i<=n ; i++){
		if (strcmp(A[i].TacGia,tac)==0){
		   printf("%10s\t",A[i].TenSach);
		}
	}
}
void sachmax (int n , Sach A[100]){
	int i;
	printf("\n 3 cuon sach co so luong nhieu nhat la: ");
	printf("\n %5s %20s %20s %16s %6s","STT","Ten Sach","Tac Gia","Nam Xuat Ban","So Luong Sach");
	for (i=1 ; i<=n ; i++){
	    for (int j=i+1; j<=n ; j++){
	    	if (A[i].SoLuongSach<A[j].SoLuongSach){
			   Sach stemp=A[i];
			   A[i]=A[j];
			   A[j]=stemp;
			}
		}
	}
	for (i=1 ; i<4 ; i++){
	printf("\n %5d %20s %20s %16li %6li",i,A[i].TenSach,(A[i].TacGia),A[i].NamXuatBan,A[i].SoLuongSach);		
	}
}
void sapxep(int n, Sach A[100]){
	printf("\n danh sach sach theo ten tac gia la: ");
    int i,j;
    long sss,ssss;
    char ss[12];
	char s[12];
   for(i=1;i<n;i++)
    for(j=i+1; j<=n ; j++)
    {
        if(strcmp(A[i].TacGia,A[j].TacGia)>0)
         {
           strcpy(s,A[j].TenSach);
           strcpy(A[j].TenSach,A[i].TenSach);
           strcpy(A[i].TenSach,s);
           strcpy(ss,A[j].TacGia);
           strcpy(A[j].TacGia,A[i].TacGia);
           strcpy(A[i].TacGia,ss);
           sss=A[j].NamXuatBan;
           A[j].NamXuatBan=A[i].NamXuatBan;
           A[i].NamXuatBan=sss;
           ssss=A[j].SoLuongSach;
           A[j].SoLuongSach=A[i].SoLuongSach;
           A[i].SoLuongSach=ssss;
         }
    }
   	printf("\n %5s %20s %20s %16s %6s","STT","Ten Sach","Tac Gia","Nam Xuat Ban","So Luong Sach");
	for (i=1 ; i<=n ; i++){
			printf("\n%5d %20s %20s %16li %6li",i,A[i].TenSach,A[i].TacGia,A[i].NamXuatBan,A[i].SoLuongSach);
	}
}
void cungho (int n , Sach A[100]){
	 int i,de=0;;
	 printf("\n nhung cuon sach cua tac gia co ho Nguyen: ");
	 	printf("\n %5s %20s %20s %16s %6s","STT","Ten Sach","Tac Gia","Nam Xuat Ban","So Luong Sach");
	 for (i=1 ; i<=n ; i++){
	 	if (strncmp(A[i].TacGia,"Nguyen",6)==0){
	 		de++;
	 		printf("\n %5d %20s %20s %16li %6li",i,A[i].TenSach,A[i].TacGia,A[i].NamXuatBan,A[i].SoLuongSach);
		 }
	 }
	 if (de==0){
	 	printf("\n khong co sach nao cua tac gia co ho Nguyen ");
	 }
}




































