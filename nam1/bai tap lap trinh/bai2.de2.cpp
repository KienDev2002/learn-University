#include<stdio.h>
#include<math.h>
#include<string.h>
struct SV {
	char HoTen[12];
	char Lop[12];
	float Diem;
};
void nhapin (int n , SV A[100]);
void TB (int n , SV A[100]);
void diemcao (int n , SV A[100]);
void sapxep (int n , SV A[100]);
int main (){
 int n;
 SV A[100];
 printf("\n nhap n sinh vien: ");
 scanf ("%d",&n);
 nhapin (n,A);
 TB (n,A);
 diemcao (n,A);
 sapxep (n,A);
}
void nhapin (int n , SV A[100]){
	int i;
	for (i=1 ; i<=n ; i++){
		printf("\n nhap Ho ten sinh vien thu %d la: ",i);
		fflush(stdin);
	    gets (A[i].HoTen);
	   	printf("\n nhap lop sinh vien thu %d la: ",i);
		fflush(stdin);
	    gets (A[i].Lop);
		printf("\n nhap diem sinh vien thu %d la: ",i);
		fflush(stdin);
	    scanf("%f",&A[i].Diem); 
	}
	printf("\n %5s %20s %20s %10s","STT","Ho Ten","Lop","Diem");
	for (i=1; i<=n ; i++){
	   printf("\n %5d %20s %20s %10.1f",i,A[i].HoTen,A[i].Lop,A[i].Diem);
	}
}
void TB (int n , SV A[100]){
	int i,d=0,d1=0,dd=0;
	float S1=0,S2=0,S3=0;
	for (i=1; i<=n ; i++){
		if (strcmp(A[i].Lop,"CNTT1")==0){
			d++;
			S1=S1+A[i].Diem;
		}
	}
	if (d==0){
		printf("\nkhong co sinh vien nao lop CNTT1");
	}else{
		printf("\n TB lop CNTT1 la: %0.2f",S1/d);
	}
}
void diemcao (int n , SV A[100]){
	printf("\n sinh vien co diem cao nhat la: ");
	printf("\n %5s %20s %20s %10s","STT","Ho Ten","Lop","Diem");
	int i;
	float max=A[1].Diem;
	for (i=1 ; i<=n ; i++){
	   if (max<A[i].Diem){
	   	  max=A[i].Diem;
	   }	
	}
 for (i=1 ; i<=n ; i++){
 	if (max==A[i].Diem){
 		   printf("\n %5d %20s %20s %10.1f",i,A[i].HoTen,A[i].Lop,A[i].Diem);
	 }
  }
}
void sapxep (int n , SV A[100]){
	printf("\n sap xep sinh vien theo ten la: ");
	printf("\n %5s %20s %20s %10s","STT","Ho Ten","Lop","Diem");
	int i,sss;
	char s[12],ss[12];
	for (i=1 ; i<n ; i++){
		for (int j=i+1; j<=n ; j++){
			if (strcmp(A[i].HoTen,A[j].HoTen)>0){
				strcpy(s,A[j].HoTen);
				strcpy(A[j].HoTen,A[i].HoTen);
				strcpy(A[i].HoTen,s);
				strcpy(ss,A[j].Lop);
				strcpy(A[j].Lop,A[i].Lop);
				strcpy(A[i].Lop,ss);
			    sss=A[j].Diem;
				A[j].Diem=A[i].Diem;
				A[i].Diem=sss;
			}
		}
	}
	for (i=1 ; i<=n ; i++){
		   printf("\n %5d %20s %20s %10.1f",i,A[i].HoTen,A[i].Lop,A[i].Diem);
	}
	
}












