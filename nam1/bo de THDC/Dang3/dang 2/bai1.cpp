#include<stdio.h>
#include<math.h>
#include<string.h>
struct toado{
	float x;
	float y;
};
void nhap (int n , toado A[100]);
void demtrong (int n , toado A[100], float r);
void demngoai (int n , toado A[100],float r);
void dientichHCN (int n , toado A[100]);
void ganO (int n , toado A[100]);
void ptdt (int n , toado A[100]);
int main(){
	int i;
	int n;
	toado A[100];
	float r;
	printf ("nhap n diem:");
	scanf ("%d",&n);
	printf ("nhap r:");
	scanf ("%f",&r);
	nhap(n,A);
	demtrong(n,A,r);				
	demngoai(n,A,r);
	dientichHCN (n,A);
	ganO(n,A);
	ptdt(n,A);
}
void nhap (int n , toado A[100]){
	int i;
	for (i=1 ; i<=n ; i++){
		printf ("nhap hoanh do diem thu %d la: ",i);
		fflush(stdin);
		scanf("%f",&A[i].x);
		printf ("nhap tung do diem thu %d la: ",i);
		fflush(stdin);
		scanf("%f",&A[i].y);
	}
	printf ("toa do diem la: ");
	for (i=1 ; i<=n ; i++){
		printf ("\n(%0.2f , %0.2f)",A[i].x,A[i].y);
		printf ("\n");
	}
}
void demtrong (int n , toado A[100], float r){
	int i;
	int dem=0;
	for (i=1 ; i<=n ; i++){
		if ((A[i].x<r)&&(A[i].y<r)&&(A[i].y>0)){
			dem++;
		}
	}
	printf ("co %d diem nam trong duong tron tam O",dem);
}
void demngoai (int n , toado A[100],float r){
	int i;
	int d=0;
	for (i=1 ; i<=n ; i++){
		if ((A[i].x>r)&&(A[i].y>r)){
			d++;	
		}
	}
	if (d%6==0){
		printf ("\nco %d diem nam ngoai duong tron tam O va so diem chia het cho 6",d);
	}else {
		printf ("\nco %d diem nam ngoai duong tron tam O va so diem khong chia het cho 6",d);
	}
}
void dientichHCN (int n , toado A[100]){
	int i;
	float xa=0,xd=0,ya=0,yd=0,xmax,ymax;
	for (i=1 ; i<=n ; i++){
		if ((A[i].x>0)&&(A[i].x>xa)) xa=A[i].x;
		if((A[i].x<0)&&(abs(A[i].x)>abs(xd))) xd=abs(A[i].x);
		if ((A[i].y>0)&&(A[i].y>ya)) ya=A[i].y;
		if((A[i].y<0)&&(abs(A[i].y)>abs(yd))) yd=abs(A[i].y);
	}
	printf("\nS=%0.2f",(xa+xd)*(ya+yd));
	printf("\ndien tich hinh vuong la: ");
	for (i=1; i<=n ; i++){
		if (abs(A[i].x)>abs(xmax))  xmax=abs(A[i].x);
		if (abs(A[i].y)>abs(ymax))  ymax=abs(A[i].y);
	}
	if (xmax>ymax){
		printf("S=%0.2f",4*pow(xmax,2));
	}else{
		printf("S=%0.2f",4*pow(ymax,2));

	}
}
void ganO(int n, toado A[100]){
	printf ("\ntoa do diem gan O nhat la: ");
	int i;
	float min=pow(A[1].x,2)+pow(A[1].y,2);
	for(i=2;i<=n;i++){
		if((pow(A[i].x,2)+pow(A[i].y,2))<min){
			 min=(pow(A[i].x,2)+pow(A[i].y,2));
		}
	}
	for (i=1 ; i<=n ; i++){
	if (min==(pow(A[i].x,2)+pow(A[i].y,2))){
		 printf ("(%0.2f  , %0.2f)",A[i].x,A[i].y);
		}
	}
}
//void ganO (int n , toado A[100]){
//	printf ("\ntoa do diem gan O nhat la: ");
//	int i;
//	float luux,luuy;
//	float min= sqrt (pow(A[1].x,2)+pow(A[1].y,2));
//	for (i=2 ; i<=n ; i++){
//		if ( (sqrt (pow(A[i].x,2)+pow(A[i].y,2)))<min){
//		    min= (sqrt (pow(A[i].x,2)+pow(A[i].y,2)));
//		    luux=A[i].x;luuy=A[i].y;
//		}
//	}
//   printf ("(%0.2f  , %0.2f)",luux,luuy);
//}
void ptdt (int n , toado A[100]){
	float x1,x2,y1,y2,a,b;
	printf ("\nnhap toa do diem A la: ");
	scanf("%f%f",&x1,&y1);
	printf ("nhap toa do diem B la: ");
	scanf("%f%f",&x2,&y2);
	a=(y2-y1)/(x2-x1);
	b=y1-a*x1;
	printf("phuong trinh duong thang di qua 2 diem A va B la: y=%0.1fx+%0.1f",a,b);
}






