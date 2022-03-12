#include<stdio.h>
#include<string.h>
#include<math.h>
struct BS {
	char HoTen[50];
	char ChuyenMon[50];
	long Tuoi;
};
 void nhapxuat (int n , BS A[100]){
 	int i;
 	for (i=1 ; i<=n ; i++){
 		printf ("Ho Ten cua bac si thu %d: ",i);
 		fflush(stdin);
 		gets (A[i].HoTen);
 		printf ("Chuyen mon cua bac si thu %d: ",i);
 		fflush(stdin);
 		gets (A[i].ChuyenMon);
 		printf ("Tuoi cua bac si thu %d: ",i);
 		fflush(stdin);
 		scanf ("%li",&A[i].Tuoi);
	 }
	 printf ("danh sach bac si la: ");
	 printf ("\n %5s %20s %15s %10s","STT","Ho Ten","Chuyen Mon","Tuoi");
    for (i=1 ; i<=n ; i++){
    	printf ("\n %5d %20s %15s %10li",i,A[i].HoTen,A[i].ChuyenMon,A[i].Tuoi);
	}
 }
 void tuoitb (int n , BS A[100]){
 	char cm1[12]="A";
 	int dem =0;
 	long tuoitbA =0;
 	char cm2[12]="B";
 	int d =0;
 	long tuoitbB =0;
 	char cm3[12]="C";
 	int dd =0;
 	long tuoitbC =0;
 	for (int i=1;i<=n;i++){
 		if (strcmpi(A[i].ChuyenMon,cm1)==0){
 			dem++;
 			tuoitbA+=A[i].Tuoi;
		 }
	 	if (strcmpi(A[i].ChuyenMon,cm2)==0){
 			d++;
 			tuoitbB+=A[i].Tuoi;
		 }
		if (strcmpi(A[i].ChuyenMon,cm3)==0){
 			dd++;
 			tuoitbC+=A[i].Tuoi;
		 }
	 }
	 if (dem==0){
	 	printf("\n khong co bac si nao chuyen mon A: ");
	 }else {
	 	printf("\n%0.2lf",(double)tuoitbA/dem);
	 }
 }
 void sapxep (int n , BS A[100]){
 	 printf ("\ndanh sach bac si theo ten la: ");
	 printf ("\n %5s %20s %15s %10s","STT","Ho Ten","Chuyen Mon","Tuoi");
 	 int i;
 	 for (i=1;i<n;i++){
 	 	for (int j=i+1;i<=n;j++){
 	 		if (strcmp (A[i].HoTen,A[j].HoTen)>0){
 	 	        BS stemp =A[i];
				 A[i]=A[j];
				 A[j]=stemp;     
			  }
		  }
	  }
    for (i=1 ; i<=n ; i++){
    	printf ("\n %5d %20s %15s %10li",i,A[i].HoTen,A[i].ChuyenMon,A[i].Tuoi);
	}
 }
int main (){
	int n;
	BS A[100];
	printf ("nhap n bac si: ");
	scanf("%d",&n);
	nhapxuat (n,A);
	tuoitb (n,A);
	sapxep (n,A);
}
