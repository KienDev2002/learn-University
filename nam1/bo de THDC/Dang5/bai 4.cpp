#include<stdio.h>
#include<math.h>
#include<string.h>
struct LapTop {
	char model[12];
	char TenHangSanXuat[12];
	char CauHinhRam[12];
	char LoaiChip[12];
	long GiaTien;
};
void nhapin (int n , LapTop A[100]);
void TB (int n , LapTop A[100]);
void inmodel (int n ,LapTop A[100]);
void sapxep (int n  , LapTop A[100]);
void tim (int n , LapTop A[100]);
int main(){
	int n;
	printf("nhap n laptop =");
	scanf ("%d",&n);
	char hang[12];
	LapTop A[100];
	nhapin (n,A);
    inmodel (n,A);
    sapxep (n,A);
    tim (n,A);
   	TB (n,A);
}
void nhapin (int n , LapTop A[100]){
	int i;
	for (i=1 ; i<=n ; i++){
		printf("nhap model cua laptop thu %d la: ",i);
		fflush (stdin);
		gets (A[i].model);
		printf("nhap ten hang san xuat cua laptop thu %d la: ",i);
		fflush (stdin);
		gets (A[i].TenHangSanXuat);
		printf("nhap cau hinh Ram cua laptop thu %d la: ",i);
		fflush (stdin);
		gets (A[i].CauHinhRam);
		printf("Loai Chip cua laptop thu %d la: ",i);
		fflush (stdin);
		gets (A[i].LoaiChip);
		printf("Gia tien cua laptop thu %d la: ",i);
		fflush (stdin);
		scanf ("%li",&A[i].GiaTien);
	}
		printf("\n %5s %20s %20s %16s %16s %10s","STT","model","Ten hang san xuat","Cau hinh ram","Loai chip","Gia Tien");
	for (i=1 ; i<=n ; i++){
			printf("\n %5d %20s %20s %16s %16s %10li",i,A[i].model,A[i].TenHangSanXuat,A[i].CauHinhRam,A[i].LoaiChip,A[i].GiaTien);
	}
}

void TB (int n , LapTop A[100]){
	int i,f[10000]={},max=0,dem=1;
    char c[100];
 	for (i=1;i<=n;i++){
  	strcpy(c[dem]=A[i].TenHangSanXuat);
  	  dem++;
  	}
    for (int i=1;i<dem;i++){
  	f[c[i]]=f[c[i]]+A[i].GiaTien;
  	if(f[c[i]]>max){
  		max=f[c[i]];
	}
}
 	 for (int i=1;i<=max;i++){
  		if (f[c[i]] >=1){
  		printf("\n%d",f[c[i]]);
	  	}
  	}
}
void inmodel (int n ,LapTop A[100]){
	int i;
	printf("\n nhung model co ram 8GB la: ");
	char ram[] = "8GB";
	for (i=1 ; i<=n ; i++){
		if (strcmp(A[i].CauHinhRam,ram)==0){
			printf("%6s\t",A[i].model);
		}
	}
}

void sapxep (int n  , LapTop A[100]){
	printf("\n danh sach laptop sap xep theo model la: ");
	int i,j;
	char s[12];
	char ss[12];
	char sss[12];
	char ssss[12];
	long d;
	for (i=1 ; i<n ; i++){
		for (j=i+1; j<=n ; j++){
			if (strcmp(A[i].model,A[j].model)>0){
			    strcpy(s,A[j].model);
			    strcpy(A[j].model,A[i].model);
			    strcpy(A[i].model,s);
			    strcpy(ss,A[j].TenHangSanXuat);
			    strcpy(A[j].TenHangSanXuat,A[i].TenHangSanXuat);
			    strcpy(A[i].TenHangSanXuat,ss);
			    strcpy(sss,A[j].CauHinhRam);
			    strcpy(A[j].CauHinhRam,A[i].CauHinhRam);
			    strcpy(A[i].CauHinhRam,sss);
			    strcpy(ssss,A[j].LoaiChip);
			    strcpy(A[j].LoaiChip,A[i].LoaiChip);
			    strcpy(A[i].LoaiChip,ssss);
                d=A[j].GiaTien;
                A[j].GiaTien=A[i].GiaTien;
                A[i].GiaTien=d;
			}
		}
	}
		printf("\n %5s %20s %20s %16s %16s %10s","STT","model","Ten hang san xuat","Cau hinh ram","Loai chip","Gia Tien");
	for (i=1 ; i<=n ; i++){
			printf("\n %5d %20s %20s %16s %16s %10li",i,A[i].model,A[i].TenHangSanXuat,A[i].CauHinhRam,A[i].LoaiChip,A[i].GiaTien);
	}
}

void tim (int n , LapTop A[100]){
	int i;
	int luui=i;
	printf("\n nhung model co ram 16GB co gia tien thap nhat la: ");
	char Ram[] = "16GB";
	long min;
	for (i=1 ; i<=n ; i++){
		if (strcmp(A[i].CauHinhRam,Ram)==0){
		    min=A[i].GiaTien;
		    luui=i;
		    break;
		}
	}
	if (i>n){
		printf("khong co model nao 16GB co gia tien thap nhat");
	}else{
	for (i=1 ; i<=n ; i++){
		if ((strcmp(A[i].CauHinhRam,Ram)==0)&&(A[i].GiaTien<min)){
		    min = A[i].GiaTien;
		    luui=i;
 		}
		}
		printf("%6s",A[luui].model);
	}
}












