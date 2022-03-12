#include<stdio.h>
#include<math.h>
#include<string.h>
struct toado {
  float x;
  float y;	
};
void khonggoc1 (int n , toado A[100]);
void timdiem (int n , toado A[100]);
void dodai (int n , toado A[100]);
void catox (int n , toado A[100]);
void namtrendt (int n , toado A[100]);
void catOx (int n , toado A[100]);
int main(){
	int n;
	toado A[100];
	printf ("nhap n day diem =");
	scanf ("%d",&n);
	for (int i=1 ; i<=n ; i++){
		printf ("hoanh do thu %d la: ",i);
		fflush(stdin);
		scanf ("%f",&A[i].x);
		printf ("tung do thu %d la: ",i);
		fflush(stdin);
		scanf ("%f",&A[i].y);
	}
	for (int i=1 ;i<=n ; i++){
		printf ("\n(%0.2f , %0.2f)",A[i].x,A[i].y);
	}
	khonggoc1 (n,A);
	timdiem(n,A);
	dodai(n,A);
	catox(n,A);
	namtrendt (n,A);
	catOx (n,A);
}
void khonggoc1 (int n , toado A[100]){
	int i;
	int dem =0;
	for (i=1 ; i<=n ; i++){
		if (((A[i].x>0)&&(A[i].y<0))||((A[i].x<0)&&(A[i].y<0))||((A[i].x<0)&&(A[i].y>0)));
		dem++;
	}
	if (dem%5==0){
		printf ("\nco %d diem khong thuoc goc phan tu thu nhat va so diem chia het cho 5",dem);
	}else {
		printf ("\nco %d diem khong thuoc goc phan tu thu nhat va so diem khong chia het cho 5",dem);
	}
}
void timdiem (int n , toado A[100]){
	printf ("\ndiem thuoc goc ptu thu tu gan O nhat la: ");
	int i;
	double min;
	double luux,luuy;
		for (i=1 ; i<=n ; i++){
		if((A[i].x>0)&&(A[i].y<0)){
		     	min=sqrt(pow(A[i].x,2)+pow(A[i].y,2));
		     	break;
		}
	}
	for (i=1 ; i<=n ; i++){
		if ((A[i].x>0)&&(A[i].y<0)&&(sqrt (pow(A[i].x,2)+pow(A[i].y,2))<=min)){
			min=sqrt (pow(A[i].x,2)+pow(A[i].y,2));
            luux=A[i].x;
			luuy=A[i].y;
		}	
	}
		printf ("(%0.2f , %0.2f)",luux,luuy);
}
void dodai (int n , toado A[100]){
	int i;
	double dodai=0;
	for (i=2 ; i<=n ; i++){
		dodai=dodai+(sqrt(pow(A[i].x-A[i-1].x,2)+pow(A[i].y-A[i-1].y,2)));
	}
		dodai=dodai+(sqrt(pow(A[n].x-A[1].x,2)+pow(A[n].y-A[1].y,2)));
	printf("\ndo dai= %0.2f",dodai);
}
void catox (int n , toado A[100]){
	int i;
	int d=0;
	for (i=1 ; i<=n ; i++){
		if ((A[i].x>0&&A[i].y>0&&A[i-1].y<0)||(A[i].x<0&&A[i].y>0&&A[i-1].y<0)||(A[i].x<0&&A[i].y<0&&A[i-1].y>0)||(A[i].x>0&&A[i].y<0&&A[i-1].y>0)){
			d++;
		}
	}
	printf("\nco %d doan thang cat truc ox",d);
}
void namtrendt (int n , toado A[100]){
	int i;
	int dd=0;
	float a,b;
	printf ("\nnhap a va b: ");
	scanf ("%f%f",&a,&b);
	for (i=1 ; i<=n ; i++){
		if (A[i].y==a*A[i].x+b){
			dd++;
		}
	}
	printf ("\nco %d diem nam tren duong thang y=ax+b",dd);
}
void catOx (int n , toado A[100]){
	int i;
	int ddd=0;
	for (i=1 ; i<=n ; i++){
		if ((A[i].x>0&&A[i].y>0)||(A[i].x<0&&A[i].y>0)){
			ddd++;
		}
	}
	printf ("\nco %d diem nam phia tren truc Ox",ddd);
}











