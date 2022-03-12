#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct Code{
	char HT[70];
	float SD;
	char lop[50];
};
struct Code *a;
void docfile(int *n , FILE *p1 , struct Code **a) {
	fscanf(p1,"%d\n",n);
	if (((*a)=(Code*)malloc((*n)*sizeof(Code)))==NULL){
		printf("Chua co bo nho!");
		exit(0);
	}
	for (int i=0;i<*n;i++){
		fscanf(p1,"%[^\n]\n %f\n %[^\n]\n",(*a)[i].HT,&(*a)[i].SD,(*a)[i].lop);
	}
}
void tinh (int n , struct Code *a , FILE *p2){
	float *diem;
	if (((diem)= (float*)calloc(n,sizeof(float)))==NULL){
		printf("\n chua co bo nho!");
		exit(0);
	}
	*diem={};
	int d=0,dd=0,ddd=0; 
	for (int i=0;i<n;i++){
		if (strcmpi(a[i].lop,"A1")==0){
			diem[0]+=a[i].SD;
			d++;
		}
		else if (strcmpi(a[i].lop,"A2")==0){
			diem[1]+=a[i].SD ;
			ddd++;
		}
		else{
		diem[2]=a[i].SD;
			dd++;	
		} 
	}
		printf("\nLop A1 co  TB diem la: %.2f",diem[0]/d);
		printf("\nLop A2 co TB  diem la: %.2f",diem[1]/ddd);
		printf("\nLop A3 co TB diem la: %.2f",diem[2]/dd);
	float max=diem[0];
	for (int i=2;i<3;i++){
		if (max<diem[i]){
			max=diem[i];
		}
	}
	for (int i=0;i<3;i++){
		if (max==diem[i]){
			printf("\nLop co tong diem cao nhat la: %s",a[i].lop);
		}
	}
}
void diemcao (int n , struct Code *a , FILE *p2){
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (a[i].SD<a[j].SD){
				Code stemp=a[i];
				a[i]=a[j];
				a[j]=stemp;	
			}
		}
	}
	printf("\n Thong ke 3 thi sinh co diem cao nhat: ");
	fprintf(p2,"\n Thong ke 3 thi sinh co diem cao nhat: ");
	printf("\n %-10s %-30s %-30s %-20s","STT","Ho Ten","So Diem","Lop");
	fprintf(p2,"\n %-10s %-30s %-30s %-20s","STT","Ho Ten","So Diem","Lop");
	for (int i=0 ; i<3 ; i++){
			printf("\n %-10d %-30s %-30.2f %-20s",i+1,a[i].HT,a[i].SD,a[i].lop);
			fprintf(p2,"\n %-10d %-30s %-30.2f %-20s",i+1,a[i].HT,a[i].SD,a[i].lop);
	}
}
int main(){
 	int n;
 	FILE *p1=fopen("Code.txt","r"),*p2=fopen("out2.4.txt","w");
 	if (p1==NULL){
 		printf("Chua co FIle");
 		exit(0);
	 }
	 docfile(&n,p1,&a);
	 tinh(n,a,p2);
	 diemcao(n,a,p2);
	 fclose(p1);
	 fclose(p2);
	 free(a);
}

