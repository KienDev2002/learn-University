#include<stdio.h>
#include<math.h>
#include<conio.h>
float  tongtunghang (int n ,  float a[100][100] , float b[100][100], int x, int m);
int main (){
	float a[100][100];
	float b[100][100];
	int m ,n,x;
	int i,j;
	printf ("nhap m hang=");
	scanf ("%d",&m);
	printf ("nhap n cot=");
	scanf ("%d",&n);
	printf ("nhap hang va cot can tinh x=");
	scanf ("%d",&x);
	for (i=1 ; i<=m ; i++){
		for (j=1 ; j<=n ; j++){
			printf ("a[%d][%d]=",i,j);
			scanf ("%f",&a[i][j]);
		}
	}
	for (i=1 ; i<=m ; i++){
		for (j=1 ; j<=n ; j++){
			printf ("b[%d][%d]=",i,j);
			scanf ("%f",&b[i][j]);
		}
	}
		printf ("ma tran A=\n");
	for (i=1 ; i<=m ; i++){
		for (int j=1 ; j<=n ; j++){
			printf ("%0.2f\t",a[i][j]);
		}
		printf ("\n");
		}
			printf ("ma tran B=\n");
	for (i=1 ; i<=m ; i++){
		for (int j=1 ; j<=n ; j++){
			printf ("%0.2f\t",b[i][j]);
		}
		printf ("\n");
}
    tongtunghang (n,a,b,x,m);
}
float tongtunghang (int n ,  float a[100][100] , float b[100][100], int x,int m){
	printf ("\n tong ptu hang %d trong ma tra A=",x);
	float suma =0;
         int j;
            for(j=0; j<=n; j++){
                 suma =suma+a[x][j];
        }  
       printf ("%0.2f",suma);
       printf ("\ntong ptu hang %d trong ma tra B=",x);
    float sumb=0;
    for (j=1 ; j<=n ; j++){
    	sumb=sumb+b[x][j];
	}
	 printf ("%0.2f",sumb);
	 printf ("\n ptu min trong ma tran A hang %d la: ",x);
	 float mina =a[x][1];
	 for (j=1 ; j<=n ; j++){
	 	if (mina>a[x][j]){
	 		mina =a[x][j];
		 }
	 }
	 	printf ("%0.2f",mina);
	 printf ("\n ptu min trong ma tran B hang %d la: ",x);
	float minB=a[x][1];
	for (j=1 ; j<=n ;j++){
		if (b[x][j]<minB){
			minB=b[x][j];
		}
	}
	printf ("%0.2f",minB);
	 
	 printf ("\n ptu max trong ma tran A cot %d la: ",x);
	float maxa=a[1][x];
	for (int i=1 ; i<=m ;i++){
		if (a[i][x]>maxa){
			maxa=a[i][x];
		}
	}
	printf ("%0.2f",maxa);
		 printf ("\n ptu max trong ma tran B cot %d la: ",x);
	float maxb=b[1][x];
	for (int i=1 ; i<=m ; i++){
		if (b[i][x]>maxb){
			maxb=b[i][x];
		}
	}
	printf ("%0.2f",maxb);
	
	printf ("\n tich ptu trong cot %d cua mt A=",x);
	float tichA =1;
	float tichB=1;
	for (int i=1 ; i<=m ; i++){
		tichA=tichA *a[i][x];
	}
	printf ("%0.2f",tichA);
		printf ("\n tich ptu trong cot %d cua mt B=",x);
		for (int i=1 ; i<=m ; i++){
		tichB=tichB *b[i][x];
	}
	printf ("%0.2f",tichB);
}























