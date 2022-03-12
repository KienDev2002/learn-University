#include<stdio.h>
#include<math.h>


void nhapin (int n , float a[100][100] ,int m){
	int i,j;
	for (i=1;i<=m;i++){
		for (j=1;j<=n;j++){
			printf("A[%d][%d]=",i,j);
			scanf("%f",&a[i][j]);
		}
	}
	for (i=1;i<=m;i++){
		for (j=1;j<=n;j++){
			printf("%0.2f\t",a[i][j]);
		}
		printf("\n");
	}
}
float tinh (int n , float a[100][100] , int m){
	int i,j;
	float tong=0;
if (m==n){
	for (i=1;i<=m;i++){
		for (j=1;j<=n;j++){
			if (m==n){
				if (i+j==n+1){
					tong+=a[i][j];
				}
			}
		}
	}
		return tong;
	}else {
	return 0;
}
}
void GTLN (int n , float a[100][100] , int m){
	float max=a[1][1];
	int i,j;
	for (i=1;i<=m;i++){
		for (j=1;j<=n;j++){
			if (a[i][j]>max){
				max=a[i][j];
			}
		}
	}
	for (i=1;i<=m;i++){
		for (j=1;j<=n;j++){
			if (max==a[i][j]){
		printf("\n GTLN la: %0.2f",a[i][j]);
	}
			}
		}
	}
void cot (int n , float a[100][100] , int m){
	printf("\n");
	int i,j=1;
	float c[100];
	int dem=1;
	for (j=1;j<=n;j++){
		c[dem]=1;
		for (i=1;i<=m;i++){
			c[dem]=c[dem]*a[i][j];
			}
			dem++;
		}
		float min=c[1];
		for(i=1;i<dem;i++){
			if (c[i]<min){
				min=c[i];
			}
		}
		printf("GTNN trong tich cot la: %0.2f\n",min);
	}	
 int  kt (int n , float a[100][100] , int m){
 	int i,j;
 	
 	if (m==n){
 		for (i=1;i<=m;i++){
 			for (j=1;j<=n;j++){
 				if(i==j && a[i][j]==0){	
 					return 0;
					}else if ( a[i][j]==a[j][i]&&a[i][j]==0){
						return 0;
					}else if (a[i][i]!=0){
						return 0;
					}
				}	
			 }
			 	 return 1;
		}else{
	 	return 0;		
	}
}
int ktra (int n , float a[100][100] , int m){
	int i,j,dem1=1;
	float d[100],e[100],tongc=0,tongp=0;
  if (m==n){
 	for (i=1;i<=m;i++){
	    d[dem1]=0;
 		for (j=1;j<=n;j++){
 				d[dem1]+=a[i][j];
			 }
			 dem1++;
		 }
	 dem1=1;
	for (j=1;j<=n;j++){
		e[dem1]=0;
 		for (i=1;i<=m;i++){
 				e[dem1]+=a[i][j];
			 }
			 dem1++;
		 }
	for (i=1;i<=m;i++){
 		for (j=1;j<=n;j++){
 			if (i==j){
 				tongc=tongc+a[i][j];
			}
	 	}
	}
 	for (i=1;i<=m;i++){
 		for (j=1;j<=n;j++){
 			if (i+j==n+1){
 				tongp=tongp+a[i][j];
			}
		 }
 	}
 	  for (i=1;i<dem1;i++){
 	  	  if ( (d[i]!=e[i]) || (d[i]!=tongp) || (d[i]!=tongc) || (e[i]!=tongp) || (e[i]!=tongc) || (tongc!=tongp) ){
 	  	  	      return 0;
			 }
	   }
 		return 1;
	}else {
		return 0;
	}
}
int main(){
	int m,n;
	float a[100][100];
	printf("nhap m hang: ");
	scanf("%d",&m);
	printf("nhap n cot: ");
	scanf("%d",&n);	
	nhapin (n,a,m);
	if (tinh(n,a,m)==0){
		printf("khong co duong cheo phu");
	}else {
		printf("\n%0.2f",tinh(n,a,m));
	}
	GTLN (n,a,m);
	cot (n,a,m);
	if (kt(n,a,m)==1){
	printf("la ma tran tam giac");	
	}else{
	printf("khong phai la ma tran tam giac");	
	}
	if (ktra(n,a,m)==1){
	printf("\nla ma phuong");	
	}else{
	printf("\nkhong phai la ma phuong");	
	}
}
