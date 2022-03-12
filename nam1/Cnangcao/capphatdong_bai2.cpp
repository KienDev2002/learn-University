#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct Sach {
	char TenSach[50];
	char TacGia[50];
	long NamXuatBan;
};
struct Sach *a;
void docfile (int *n , Sach **a, FILE *p1){
	if ((*a = (Sach*)malloc((*n+1)*sizeof(Sach)))==NULL){
		printf("\nKhong du bo nho!");
		exit(0);
	}
	fscanf(p1,"%d\n",n);
	printf(" Co %d cuon sach: ",*n);
	int i=0;
	for (;;){
		fscanf(p1,"%[^\n]\n %[^\n]\n %li\n",(*a)[i].TenSach,(*a)[i].TacGia,&(*a)[i].NamXuatBan);
		i++;
		if (feof(p1))	break;
	}
}
void xuat (int n , Sach*a){
	printf("\n Thong ke cac sach: ");
	printf("\n %-10s %-30s %-30s %-20s","STT","Ten Sach","Tac Gia","Nam Xuat Ban\n");
	for (int i=0 ; i<n ; i++){
			printf("\n %-10d %-30s %-30s %-20li",i+1,a[i].TenSach,a[i].TacGia,a[i].NamXuatBan);
	}
}
int DemSach (int n , Sach *a){
	int dem=0;
	char *tac = (char*)malloc(30*sizeof(char));
	printf("\n nhap  1 tac gia can thong ke so sach la: ");
	fflush(stdin);
	gets(tac);
	printf(" Tac gia %s co: ",tac);
	for (int i=0 ; i<n ; i++){
		if (strcmp(a[i].TacGia,tac)==0){
		   dem++;
		}
	}
	if (dem==0){
		return 0;
	}else{
		return dem;
	}
}
void thongke (int n , Sach *a){
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (a[i].NamXuatBan>a[j].NamXuatBan){
				Sach stemp = a[i];
				a[i]=a[j];
				a[j]=stemp;
			}
		}
	}
	int i=0,cuon;
	while (i<n){
		cuon =0;
		for (int j=i;;j++){
			if (a[i].NamXuatBan==a[j].NamXuatBan){
				cuon++;
			}else{
				break;
			}
		}
		printf("\n Nam %li : %d cuon",a[i].NamXuatBan,cuon);
		i+=cuon;
	}
}
void Menu (int n , Sach *a, FILE *p1){
	int x;
	do {
		printf("\n\n Nhap chon:\n 1.Doc File \n 2.Thong ke sach\n 3.Dem theo tac gia\n 4.Thong ke\n 5. EXIT\n");
		scanf("%d",&x);
		if (x<1||x>5){
		printf(" Vui long nhap lai chon:\n 1.Doc File\n 2.Thong ke sach\n 3.Dem theo tac gia\n 4.Thong ke\n 5. EXIT\n");
		scanf("%d",&x);
		}else if (x==1){
		docfile(&n,&a,p1);
		}else if (x==2){
		xuat(n,a);
		}else if (x==3){
		printf("%d cuon",DemSach(n,a));
		}else if(x==4){
		thongke(n,a);
		}else if (x==5){
			printf("EXIT\n");
			exit(0);
		}
	}while (x>0&&x<6);
}
int main(){
	int n;
	FILE *p1;
	p1=fopen("Sach.txt","r");
	if (p1==NULL){
		printf("Khong tim thay file!");
		exit(0);
	}
	Menu(n,a,p1);
	free(a);
}

