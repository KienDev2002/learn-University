#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define size 100
void docfile (int *n , int *m , FILE *p1, FILE *p2 , float ***a){
		fscanf(p1,"%d",&(*m));
	fscanf(p1,"%d",&(*n));
	*a=(float**)malloc((*m)*sizeof(float*));
	for (int i=0;i<*m;i++){
		(*a)[i]=(float*)malloc((*n)*sizeof(float));
	}
	if (p1==NULL){
		printf("khong tim thay file");
		exit(0);
	}
	printf("- Ma tran A co %d x %d la: \n",*m,*n);
	fprintf(p2,"- Ma tran A co %d x %d la: \n",*m,*n);
	for (int i=0;i<*m;i++){
		for (int j=0;j<*n;j++){
			fscanf(p1,"%f",&(*a)[i][j]);
		}
	}
	for (int i=0;i<*m;i++){
		for (int j=0;j<*n;j++){
			printf("%.2f\t",(*a)[i][j]);
			fprintf(p2,"%.2f\t",(*a)[i][j]);
		}
		printf("\n");
		fprintf(p2,"\n");
	}
}
void tonghangcot (int n , int m , float **a , FILE *p2){
	int dem1=0,dem2=0;
	float hang[dem1];
	float cot[dem2];
	hang[0]=0;
	cot[0]=0;
	for (int i=0;i<m;i++){
		hang[dem1]=0;
		for (int j=0;j<n;j++){
			hang[dem1]=hang[dem1]+a[i][j];
		}
		dem1++;
	}
		float max=hang[0],min=hang[0];
		for (int i=0;i<dem1;i++){
		printf("\nTong hang %d la: %.2f\t",i+1,hang[i]);
		fprintf(p2,"\nTong hang %d la: %.2f\t",i+1,hang[i]);
	}
		for (int i=1;i<dem1;i++){
			if (hang[i]>max){
			max=hang[i];
			}
			if (hang[i]<min){
				min=hang[i];
			}
		}
		for (int i=0;i<dem1;i++){
			if (max==hang[i]){
				printf("\nTong hang co gia tri lon nhat la: hang %d",i+1);
				fprintf(p2,"\nTong hang co gia tri lon nhat la: hang %d",i+1);
			}
			if (min==hang[i]){
				printf("\nTong hang co gia tri nho nhat la: hang %d",i+1);
				fprintf(p2,"\nTong hang co gia tri nho nhat la: hang %d",i+1);
				}
			}
	for (int j=0;j<n;j++){
		cot[dem2]=0;
		for (int i=0;i<m;i++){
			cot[dem2]=cot[dem2]+a[i][j];
		}
		dem2++;
	}
	for (int i=0;i<dem2;i++){
		printf("\nTong cot %d la: %.2f\t",i+1,cot[i]);
		fprintf(p2,"\nTong cot %d la: %.2f\t",i+1,cot[i]);
	}
	float max2=cot[0],min2=cot[0];
		for (int i=1;i<dem2;i++){
			if (cot[i]>max2){
				max2=cot[i];
			}
			if (cot[i]<min2){
				min2=cot[i];
			}
		}
		for (int i=0;i<dem2;i++){
			if (max2==cot[i]){
				printf("\nTong cot co gia tri lon nhat la: cot %d",i+1);
				fprintf(p2,"\nTong cot co gia tri lon nhat la: cot %d",i+1);
			}
			if (min2==cot[i]){
				printf("\nTong cot co gia tri nho nhat la: cot %d",i+1);
				fprintf(p2,"\nTong cot co gia tri nho nhat la: cot %d",i+1);
			}
	}
}
void xoay90do (int m , int n , float **a){
	printf("\n ma tran xoay 90 do la: \n");
	for (int j=0;j<n;j++){
		for (int i=m-1;i>=0;i--){
			printf("%0.2f\t",a[i][j]);		
		}
		printf("\n");
	}
}
float tinhtong(int m , int n , float **a){
	int dem=0;
	float S=0;
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			if ((int)a[i][j]%2==0 && (int)a[i][j]%3==1){
				dem++;
				S+=a[i][j];
			}
		}
	}
    if (dem==0){
    	return 0;
	}else{
		return S;
	}
}
float tinhduongcheo(int m , int n , float **a){
	float S1=0;
	if (m!=n){
		return 0;
	}else{
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			if (i==j){
				S1+=a[i][j];
			}
		}
	}
	return S1;
}
}
float tongcheophu(int m , int n , float **a){
	float S2=0;
	if (m!=n){
		return 0;
	}else{
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			if (i+j==n-1){
				S2+=a[i][j];
			}
		}
	}
	return S2;	
	}
}
int ktra(int m , int n , float **a){
	if (m!=n){
		return 0;
	}else{
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			if (i<j && a[i][j]!=0){
					return 0;
				}
			}
		}
	}
	return 1;
}
int ktraduoi(int m , int n , float **a){
	if (m!=n){
		return 0;
	}else{
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			if (i>j && a[i][j]!=0){
					return 0;
				}
			}
		}
	}
	return 1;
}
void matranhv (int m , int n , float **a, FILE *p2){
	float stemp;
	int i=0;
	while(i<m-1){
		for (int j=0;j<n;j++){
			stemp=a[i][j];
			a[i][j]=a[i+1][j];
			a[i+1][j]=stemp;
	}
	i++;
}
		for (int i=0;i<m;i++){
			for (int j=0;j<n;j++){
			printf("%.2f\t",a[i][j]);
			fprintf(p2,"%.2f\t",a[i][j]);
		}
		printf("\n");
		fprintf(p2,"\n");
	}
}
void tong2matran(int m , int n , float **a , float **b, FILE *p2, float **d){
	printf("\nNhap ma tran B: \n");
		for (int i=0;i<m;i++){
			for (int j=0;j<n;j++){
				printf("b[%d][%d]=",i,j);
				scanf("%f",&b[i][j]);
			}
		}
		printf("\nTong 2 ma tran A va B la: \n");
		fprintf(p2,"\nTong 2 ma tran A va B la: \n");
		for (int i=0;i<m;i++){
			for (int j=0;j<n;j++){
				d[i][j]=a[i][j]+b[i][j];
			}
		}
		for (int i=0;i<m;i++){
			for (int j=0;j<n;j++){
			printf("%.2f\t",d[i][j]);
			fprintf(p2,"%.2f\t",d[i][j]);
		}
		printf("\n");
		fprintf(p2,"\n");
	}
}
void tich2matran(int m , int n , float **a , float **c, FILE *p2, float **d){
		printf("\nNhap ma tran C: \n");
		for (int i=0;i<m;i++){
			for (int j=0;j<n;j++){
				printf("c[%d][%d]=",i,j);
				scanf("%f",&c[i][j]);
			}
		}
		printf("\nTich 2 ma tran A va C la: \n");
		fprintf(p2,"\nTich 2 ma tran A va C la: \n");
		if (m!=n){
			printf("\nKhong thuc hien duoc khi DK so hang cua mtran truoc phai bang so cot cua mtran sau!");
			fprintf(p2,"\nKhong thuc hien duoc khi DK so hang cua mtran truoc phai bang so cot cua mtran sau!");
		}else{
				for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			d[i][j]=0;
			for (int k=0;k<n;k++){
				d[i][j]+=a[i][k]*c[k][j];
			}
		}
	}
		for (int i=0;i<m;i++){
			for (int j=0;j<n;j++){
			printf("%.2f\t",d[i][j]);
			fprintf(p2,"%.2f\t",d[i][j]);
		}
		printf("\n");
		fprintf(p2,"\n");
	}
		}
}
void max_cot(int m , int n , float **a){
	for (int j=0;j<n;j++){
		float maxc=a[0][j], minc=a[0][j];
		for (int i=0;i<m;i++){
			maxc = maxc > a[i][j] ? maxc : a[i][j];
			minc = minc < a[i][j] ? minc : a[i][j];
		}
		printf("\nmax cot thu %d la: %.2f",j+1,maxc);
		printf("\nmin cot thu %d la: %.2f",j+1,minc);
	}
}

int main(){
	int n,m;
	FILE *p1,*p2;
	float **a;
	p1=fopen("matrancap2.txt","r");
	p2=fopen("xuatmtcap2.txt","w");
	docfile(&n,&m,p1,p2,&a);
		xoay90do(m,n,a);
	tonghangcot(n,m,a,p2);

	if (tinhtong(m,n,a)==0){
	   printf("\nKhong co phan tu nao chan chia 3 du 1!");	
	}else{
	printf("\nTong cac so chan chia 3 du 1 la: %.2f",tinhtong(m,n,a));
	fprintf(p2,"\nTong cac so chan chia 3 du 1 la: %.2f",tinhtong(m,n,a));
	}
	if (tinhduongcheo(m,n,a)==0){
		printf("\nKhong co duong cheo chinh");
		fprintf(p2,"\nKhong co duong cheo chinh");
	}else{
	printf("\nTong duong cheo chinh la: %.2f",tinhduongcheo(m,n,a));
	fprintf(p2,"\nTong duong cheo chinh la: %.2f",tinhduongcheo(m,n,a));
	}
	if (tongcheophu(m,n,a)==0){
		printf("\nKhong co duong cheo phu \n");
		fprintf(p2,"\nKhong co duong cheo phu \n");
	}else{
	printf("\nTong duong cheo phu la: %.2f\n",tongcheophu(m,n,a));
	fprintf(p2,"\nTong duong cheo phu la: %.2f\n",tongcheophu(m,n,a));
	}
	if (ktra(m,n,a)==1){
		printf("Ma tran la ma tran tam giac tren\n");
		fprintf(p2,"Ma tran la ma tran tam giac tren\n");
	}else{
		printf("Ma tran khong la ma tran tam giac tren\n");
		fprintf(p2,"Ma tran khong la ma tran tam giac tren\n");
	}
	if (ktraduoi(m,n,a)==1){
		printf("Ma tran la ma tran tam giac duoi\n");
		fprintf(p2,"Ma tran la ma tran tam giac duoi\n");
	}else{
		printf("Ma tran khong la ma tran tam giac duoi\n");
		fprintf(p2,"Ma tran khong la ma tran tam giac duoi\n");
	}
	printf("Ma tran hoan vi cua A la: \n");
	fprintf(p2,"Ma tran hoan vi cua A la: \n");
	matranhv(m,n,a,p2);
		max_cot(m,n,a);

	float **b=NULL;
	float **c=NULL;
	float **d=NULL;
	b=(float**)malloc(m*sizeof(float*));
	for (int i=0;i<m;i++){
		b[i]=(float*)malloc(n*sizeof(float));
	}
		c=(float**)malloc(m*sizeof(float*));
	for (int i=0;i<m;i++){
		c[i]=(float*)malloc(n*sizeof(float));
	}
		d=(float**)malloc(m*sizeof(float*));
	for (int i=0;i<m;i++){
		d[i]=(float*)malloc(n*sizeof(float));
	}
	tong2matran(m,n,a,b,p2,d);
	tich2matran(m,n,a,c,p2,d);
	// giai phóng tung hàng
    for (int i = 0; i < m; i++){
      free(a[i]);
    }
  //   giai phong con tro quan lý các dòng
   free(a);
       for (int i = 0; i < m; i++){
      free(b[i]);
    }
  //   giai phong con tro quan lý các dòng
   free(b);
          for (int i = 0; i < m; i++){
      free(c[i]);
    }
  //   giai phong con tro quan lý các dòng
   free(c);
       for (int i = 0; i < m; i++){
      free(d[i]);
    }
  //   giai phong con tro quan lý các dòng
   free(d);

}

