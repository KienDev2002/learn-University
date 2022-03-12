#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct SV {
	char HT[50];
	float SD;
	char Donvi[50];
}; 
void docfile(int *n , FILE *p1 ,struct  SV *a){
	fscanf(p1,"%d\n",&(*n));
	printf("Co %d thi sinh: \n",*n);
	int i=0;
	for (;;){
		fscanf(p1,"%[^\n]\n %f\n %[^\n]\n",a[i].HT,&a[i].SD,a[i].Donvi);
		i++;
		if (feof(p1)) break;
	}
}
void xuat (int n ,struct SV *a,FILE *p2){
	fprintf(p2,"Co %d thi sinh: \n",n);
	printf("\nDanh sach thi sinh: ");
	fprintf(p2,"\nDanh sach thi sinh:");
	printf("\n%-10s %-30s %-20s %-10s","STT","Ho Ten","So Diem","Don Vi\n");
	fprintf(p2,"\n%-10s %-30s %-20s %-10s","STT","Ho Ten","So Diem","Don Vi\n");
	for (int i=0;i<n;i++){
		printf("\n%-10d %-30s %-20.2f %-10s",i+1,a[i].HT,a[i].SD,a[i].Donvi);
		fprintf(p2,"\n%-10d %-30s %-20.2f %-10s",i+1,a[i].HT,a[i].SD,a[i].Donvi);
	}
}
void Tong (int n , FILE *p2 , struct SV *a){
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (strcmpi(a[i].Donvi,a[j].Donvi)>0){
				SV stemp = a[i];
				a[i]=a[j];
				a[j]=stemp;
			}
		}
	}
	int i=0,dem,luui;
	float S,max=0;
	while (i<n){
		dem=0;
		S=0;
		for (int j=i;;j++){
			if (strcmpi(a[i].Donvi,a[j].Donvi)==0){
				S+=a[j].SD;
				dem++;	
			}else{
				break;
			}
		}
		if (S>max){
			max=S;
			luui=i;
		}
		printf("\n\nDon vi %s co tong diem la: %.2f",a[i].Donvi,S);
		fprintf(p2,"\n\nDon vi %s co tong diem la: %.2f",a[i].Donvi,S);
		i+=dem;
	}
	for (int i=0;i<n;i++){
		if (max==a[i].SD){
			printf("\n\nDon vi %s co tong diem cao nhat",a[i].Donvi);
			fprintf(p2,"\n\nDon vi %s co tong diem cao nhat",a[i].Donvi);
		}
	}
		printf("\n\nDon vi %s co tong diem cao nhat",a[luui].Donvi);
		fprintf(p2,"\n\nDon vi %s co tong diem cao nhat",a[luui].Donvi);
}
void timdiemcao (int n , struct SV *a , FILE *p2){
	printf("\n\ndanh sach 3 Thi sinh co diem cao nhat la: ");
	fprintf(p2,"\n\ndanh sach 3 Thi sinh co diem cao nhat la: ");
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (a[i].SD<a[j].SD){
				SV stemp= a[i];
				a[i]=a[j];
				a[j]=stemp;
			}
		}
	}
	for (int i=0;i<3;i++){
		printf("\n%-10d %-30s %-20.2f %-10s",i+1,a[i].HT,a[i].SD,a[i].Donvi);
		fprintf(p2,"\n%-10d %-30s %-20.2f %-10s",i+1,a[i].HT,a[i].SD,a[i].Donvi);
	}
}
void Menu (int n , struct SV *a, FILE *p1, FILE *p2){
	int x;
	do {
		printf("\n\n Nhap chon:\n 1.Doc File \n 2.Thong ke thi sinh\n 3. Tong diem cua moi don vi \n 4.Tim 3 thi sinh co diem cao nhat\n 5. EXIT\n");
		scanf("%d",&x);
		if (x<0||x>5){
		printf(" Vui long nhap lai chon:\n 1.Doc File \n 2.Thong ke thi sinh\n 3. Tong diem cua moi don vi \n 4.Tim 3 thi sinh co diem cao nhat\n 5. EXIT\n ");
		scanf("%d",&x);
		}else if (x==1){
		docfile(&n,p1,a);
		}else if (x==2){
		xuat(n,a,p2);
		}else if (x==3){
		Tong(n,p2,a);
		}else if(x==4){
		timdiemcao(n,a,p2);
		}else if (x==5){
			printf("EXIT\n");
			exit(0);
		}
	}while (x>0&&x<5);
}
int main(){
	int n;
	FILE *p1 ,*p2;
	struct SV *a=(SV*)malloc((n)*sizeof(SV));
	p1=fopen("input.txt","r");
	p2=fopen("ketqua.txt","w");
	if (p1==NULL){
		printf("\nKhong tim thay file!");
	}
	Menu(n,a,p1,p2);
	free(a);
}

