#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define size 100
void docfile (int *n , int *m , FILE *p1, FILE *p2 , float *a){
	if (p1==NULL){
		printf("khong tim thay file");
		exit(0);
	}
	fscanf(p1,"%d",&(*n));
	fscanf(p1,"%d",&(*m));
	printf("- Ma tran A co %d x %d la: \n",*m,*n);
	fprintf(p2,"- Ma tran A co %d x %d la: \n",*m,*n);
	for (int i=0;i<*m;i++){
		for (int j=0;j<*n;j++){
			fscanf(p1,"%f",a+i*(*n)+j);
		}
	}
	for (int i=0;i<*m;i++){
		for (int j=0;j<*n;j++){
			printf("%.2f\t",*(a+i*(*n)+j));
			fprintf(p2,"%.2f\t",*(a+i*(*n)+j));
		}
		printf("\n");
		fprintf(p2,"\n");
	}
}
void tonghangcot (int n , int m , float *a , FILE *p2){
	int dem1=0,dem2=0;
	float hang[dem1];
	float cot[dem2];
	hang[0]=0;
	cot[0]=0;
	for (int i=0;i<m;i++){
		hang[dem1]=0;
		for (int j=0;j<n;j++){
			hang[dem1]=hang[dem1]+(*(a+i*n+j));
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
			cot[dem2]=cot[dem2]+(*(a+i*n+j));
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
float tinhtong(int m , int n , float *a){
	int dem=0;
	float S=0;
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			if ((int)(*(a+i*n+j))%2==0 && (int)(*(a+i*n+j))%3==1){
				dem++;
				S+=(*(a+i*n+j));
			}
		}
	}
    if (dem==0){
    	return 0;
	}else{
		return S;
	}
}
float tinhduongcheo(int m , int n , float *a){
	float S1=0;
	for(int i=0;i<n*n;i=i+n+1){
				S1+=(*(a+i));
		}
	return S1;
}
float tongcheophu(int m , int n , float *a){
	float S2=0;
			for(int i=n-1;i<n*n-1;i=i+n-1){
				S2+=(*(a+i));
			}
	return S2;
}
int ktra(int m , int n , float *a){
	if (m!=n){
		return 0;
	}else{
	for (int i=0;i<m;i++){
		for (int j=0;j<i;j++){
			if (*(a+i*n+j)==0){
				return 0;
				}
			}
		}
	}
	return 1;
}
int main(){
	int n,m;
//	float a[size][size];
	float *a = (float*)malloc((m+n)*sizeof(float));
//    float **a = (float**)malloc(m*sizeof(float*));
//    for (int i = 0; i < m; i++){
//        // Cap phát cho tung con tro cap 1
//        a[i] = (float*)malloc(n * sizeof(float*));
//    }
	FILE *p1,*p2;
	p1=fopen("matran.txt","r");
	p2=fopen("xuatmt.txt","w");
	docfile(&n,&m,p1,p2,(float*)a);
	tonghangcot(n,m,(float*)a,p2);
	if (tinhtong(m,n,(float*)a)==0){
	   printf("\nKhong co phan tu nao chan chia 3 du 1!");	
	}else{
	printf("\nTong cac so chan chia 3 du 1 la: %.2f",tinhtong(m,n,(float*)a));
	fprintf(p2,"\nTong cac so chan chia 3 du 1 la: %.2f",tinhtong(m,n,(float*)a));
	}
	printf("\nTong duong cheo chinh la: %.2f",tinhduongcheo(m,n,(float*)a));
	fprintf(p2,"\nTong duong cheo chinh la: %.2f",tinhduongcheo(m,n,(float*)a));
	printf("\nTong duong cheo phu la: %.2f",tongcheophu(m,n,(float*)a));
	fprintf(p2,"\nTong duong cheo phu la: %.2f",tongcheophu(m,n,(float*)a));
	printf("\n%d",ktra(m,n,(float*)a));
//	// giai phóng tung hàng
//    for (int i = 0; i < m; i++){
//      free(a[i]);
//    }
    // giai phong con tro quan lý các dòng
   free(a);
}

