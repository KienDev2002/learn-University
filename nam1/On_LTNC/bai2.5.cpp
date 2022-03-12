#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct oto{
	int BKS;
	float TT;
	char Cty[100];
};
struct oto *a;
void docfile (int *n , struct oto **a , FILE *p1){
	fscanf(p1,"%d\n",n);
	if (((*a)=(oto*)malloc((*n)*sizeof(oto)))==NULL){
		printf("chua co bo nho");
		exit(0);
	}
	for (int i=0;i<*n;i++){
		fscanf(p1,"%d\n %f\n %[^\n]\n",&(*a)[i].BKS,&(*a)[i].TT,(*a)[i].Cty);
	}
}
int demoto (int n , struct oto *a , FILE *p2){
	int dem=0;
	for (int i=0;i<n;i++){
		if ((strcmpi(a[i].Cty,"B")==0) && (a[i].BKS%3==0)){
			dem++;
		}
	}
	if (dem==0){
		return 0;
	}else{
		return dem;
	}
}
void otonho (int n , struct oto *a , FILE *p2){
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (a[i].TT>a[j].TT){
				oto stemp = a[i];
				a[i]=a[j];
				a[j]=stemp;
			}
		}
	}
	printf("\n Thong ke  3 oto TT nho nhat la: ");
	fprintf(p2,"\n Thong ke 3 oto TT nho nhat la: ");
	printf("\n %-10s %-20s %-20s %-20s","STT","Bien kiem soat","Trong tai","Cong ty");
	fprintf(p2,"\n %-10s %-20s %-20s %-20s","STT","Bien kiem soat","Trong tai","Cong ty");
	for (int i=0 ; i<3 ; i++){
			printf("\n %-10d %-20d %-20.2f %-20s",i+1,a[i].BKS,a[i].TT,a[i].Cty);
			fprintf(p2,"\n %-10d %-20d %-20.2f %-20s",i+1,a[i].BKS,a[i].TT,a[i].Cty);
	}
}
int main(){
	int n;
	FILE *p1=fopen("oto.txt","r"), *p2=fopen("out2.5.txt","w");
	if (p1==NULL){
		printf("chua co file");
		exit(0);
	}
	docfile(&n,&a,p1);
	printf("\nCo %d oto cua cty B co BKS chia het cho 3",demoto(n,a,p2));
	fprintf(p2,"\nCo %d oto cua cty B co BKS chia het cho 3",demoto(n,a,p2));
	otonho(n,a,p2);
	fclose(p1);
	fclose(p2);
	free(a);
}

