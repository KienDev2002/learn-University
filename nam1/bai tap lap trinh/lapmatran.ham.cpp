#include<stdio.h>
#include<math.h>
void inmang (int n , int a[100][100],int m);
void TBC (int n , int a[100][100],int m);
void timptumaxvavitri (int n , int a[100][100],int m );

 int main (){
 	int a[100][100];
 	int n,m;
 	int i ,j;
 	printf ("nhap so hang cua ma tran =");
 	scanf ("%d",&n);
 	printf ("nhap so cot =");
 	scanf ("%d",&m);
 	for (int i=1 ; i<=n ; i++){
 		for (int j=1 ; j<=m ; j++){
 			printf ("ma tran:  [%d][%d]=",i,j);
 			scanf ("%d",&a[i][j]);
		 }
	 }
	  

	 inmang(n,a,m);
	 TBC (n,a,m);
	 timptumaxvavitri (n,a,m);
}
 void inmang (int n , int a[100][100],int m){
 	printf ("ma tran A = \n");
 		for (int i=1 ; i<=n ; i++){
 		    for (int j=1 ; j<=m ; j++){
 			printf ("%d\t",a[i][j]);
		 }
		 printf ("\n");
 }
}
void TBC (int n , int a[100][100],int m){
	printf ("\n");

	int i ,j;
	int dem =0;
	int S=0;
	for (i=1 ; i<=n ; i++){
		for (j=1 ; j<=n ; j++){
			if (-10<=a[i][j]&&a[i][j]<=20){
				dem++;
				S=S+a[i][j];
			}
		}
	}
     if (dem==0){
     	printf ("\n khong co ptu nao thoa man");
	 }else {
	 	printf ("TBC=%0.2f",(float)S/dem);
	 }
}
void timptumaxvavitri (int n , int a[100][100],int m ){
	printf ("\n");
	int max =a[1][1];
	int i , j ;
	int vtri;
	for (i=1 ; i<=n ; i++){
		for (j=1 ; j<=m ; j++){
			if (a[i][j]>max){
				max=a[i][j];
			}
		}
	}
	printf ("max = %d ",max);
	printf ("\n vi tri max tai  :");
	for (i=1 ; i<=n ; i++){
		for (j=1 ; j<=m ; j++){
			if (a[i][j]==max){
				printf ("a[%d][%d] ",i,j);
			}
		}
	}
}

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
