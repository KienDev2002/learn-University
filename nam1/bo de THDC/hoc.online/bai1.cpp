#include<stdio.h>
#include<math.h>
void amnho (int n , float A[100][100],int m);
void TBN (int n , float A[100][100],int m);
void TBC (int n , float A[100][100],int m , float x);
void tongdcc (int n , float A[100][100], int m);
void solanmax (int n , float A[100][100], int m );
int main (){
	int n,m;
	float A[100][100];
	float x;
	printf("nhap m hang: ");
	scanf ("%d",&m);
	printf("nhap n cot: ");
	scanf ("%d",&n);
	printf("nhap ma tran: ");
	for (int i=1 ; i<=m ; i++){
		for (int j=1 ; j<=n ; j++){
		printf("A[%d][%d]=",i,j);
	scanf ("%f",&A[i][j]);
		}
	}
	printf("nhap x=");
	scanf ("%f",&x);
	amnho(n,A,m);
	TBN (n,A,m);
	TBC (n,A,m,x);
	tongdcc (n,A,m);
	solanmax (n,A,m);
}
// gia tri am lon nhat, gia tri duong nho nhat
void amnho (int n , float A[100][100],int m){
	int i,j;
	float min,max=0;
    for (i=1 ; i<=m ; i++){
    	for (j=1 ; j<=n ; j++){
    		if (A[i][j]<0){
    			max=A[i][j];
    			break;
			}
		}
	}	
	   for (i=1 ; i<=m ; i++){
    	for (j=1 ; j<=n ; j++){
    		if ((A[i][j]<0)&&(A[i][j]>max)){
    			max=A[i][j];
			}
		}
	}
	if (max==0){
		printf("\nkhong co gia tri am lon nhat:");
	}else{
	printf("\ngia tri am lon nhat: %0.2f",max);
}
	   for (i=1 ; i<=m ; i++){
    	for (j=1 ; j<=n ; j++){
    		if (A[i][j]>0){
    			min=A[i][j];
    			break;
			}
		}
	}	
	   for (i=1 ; i<=m ; i++){
    	for (j=1 ; j<=n ; j++){
    		if ((A[i][j]>0)&&(min>A[i][j])){
    			min=A[i][j];
			}
		}
	}
	printf("\n gia tri duong nho nhat: %0.2f",min);
}
//TBN cac gt duong
void TBN (int n , float A[100][100],int m){
	int i,j;
	float S=1;
	int dem=0;
   for (i=1 ; i<=m ; i++){
    	for (j=1 ; j<=n ; j++){
    		if (A[i][j]>0){
               S=S*A[i][j];
			   dem++;  
			}
		}
	}
      if (dem==0){
      	printf("khong co gia tri duong");
	  }else {
	  	float kq= pow(S,(1.0/dem));
	  	printf("\nTBN cac gia tri duong la: %0.2f",kq);
	  }
}
// tbc cac gia tri duong
void TBC (int n , float A[100][100],int m , float x){
	int i,j;
	float S=0;
	int d=0;
	 for (i=1 ; i<=m ; i++){
    	for (j=1 ; j<=n ; j++){
    		if (A[i][j]>x){
               S=S+A[i][j];
			   d++;  
			}
		}
	}
	if (d==0){
		printf ("\nkhong co so nao lon hon x");
	}
	else {
	printf("\nTBC cac gia tri lon x la: %0.2f",S/d);
	}
}
//tong cac ptu nam tren duong cheo chinh
void tongdcc (int n , float A[100][100], int m){
	int i,j;
	float S=0;
	 for (i=1 ; i<=m ; i++){
    	for (j=1 ; j<=n ; j++){
    		if (i==j){
               S=S+A[i][j];
			}
		}
}
if (m==n){
		printf("\ntong duong cheo chinh la: %0.2f",S);
}else {
	printf("\nkhong tinh duoc duong cheo chinh");
}
}// in ra so xuat hien nhieu nhat 
void solanmax (int n , float A[100][100], int m  ){
	int i,j;
	int demduong[10000]= {};
	int demam[10000]={};
    int pos=0;
	int max=0;
	for (i=1 ; i<=m ; i++){
		for (j=1 ; i<=n ; j++){
			if (A[i][j]>0)
				demduong[A[i][j]]++;
			else
				demam[-A[i][j]]++;
			if (max<demduong[A[i][j]]){
				max=demduong[A[i][j];
				pos =A[i][j];
			}
			if (max<demam[-A[i][j]]){
				max=demam[-A[i][j]];
				pos =A[i][j];
			}
		}
	}
	printf("%d",pos);
}



























