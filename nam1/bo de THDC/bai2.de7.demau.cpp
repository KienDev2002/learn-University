#include<stdio.h>
#include<string.h>
#include<math.h>
struct BS {
	char HoTen[12];
	char ChuyenMon[12];
	long Tuoi;
};
 void nhapxuat (int n , BS A[100]);
 void tuoitb (int n , BS A[100]);
 void sapxep (int n , BS A[100]);
int main (){
	int n;
	BS A[100];
	printf ("nhap n bac si: ");
	scanf("%d",&n);
	nhapxuat (n,A);
	tuoitb (n,A);
	sapxep (n,A);
}
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
 	int i,dem=0,dd=0,d=0;
 	float TuoiTBA =0;
 	char CMA []="A";
 	float TuoiTBB =0;
 	char CMB []="B";
 	float TuoiTBC =0;
 	char CMC []="C";
 	printf ("\ntuoi trung binh cua bac si chuyen mon A la: ");
 	for (i=1 ; i<=n ; i++){
 		if (strcmp (A[i].ChuyenMon,CMA)==0){
 			dem++;
 			TuoiTBA=TuoiTBA+(A[i].Tuoi);
		 }
	 }
	 printf ("TBA=%0.2f",float(TuoiTBA/dem));
	printf ("\ntuoi trung binh cua bac si chuyen mon B la: ");
 	for (i=1 ; i<=n ; i++){
 		if (strcmpi (A[i].ChuyenMon,CMB)==0){
 			dd++;
 			TuoiTBB=TuoiTBB+(A[i].Tuoi);
		 }
	 }
	 printf ("TBB=%0.2f",float(TuoiTBB/dd));
	printf ("\ntuoi trung binh cua bac si chuyen mon C la: ");
 	for (i=1 ; i<=n ; i++){
 		if (strcmpi (A[i].ChuyenMon,CMC)==0){
 			d++;
 			TuoiTBC=TuoiTBC+(A[i].Tuoi);
		 }
	 }
	 printf ("TBC=%0.2f",float(TuoiTBC/d));
 }
 void sapxep (int n , BS A[100]){
 	printf ("\n danh sach bac si giam dan theo bang chu cai la: ");
 	int i,j;
 	for (i=1 ; i<=n ; i++){
 		for (j=i+1 ; j<n ; j++){
 			if (strcmp (A[i].HoTen,A[j].HoTen)>0){
 				BS stemp = A[i];
 				A[i]=A[j];
 				A[j]=stemp;
			 }
		 }
	 }
	 for (i=1 ; i<=n ; i++){
    	printf ("\n %5d %20s %15s %10li",i,A[i].HoTen,A[i].ChuyenMon,A[i].Tuoi);
	}
}







