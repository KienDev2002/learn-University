#include<stdio.h>
#include<string.h>
#include<math.h>
struct day {
	float x;
	float y;
};

void nhapxuat (int n , day A[100] );
void tim (int n , day A[100]);
void khoangcach (int n , day A[100]);
int main (){
	int n;
	day A[100];
	printf ("nhap n day diem =");
	scanf ("%d",&n);
	nhapxuat (n,A);
	tim (n,A);
	khoangcach(n,A);
}
void nhapxuat (int n , day A[100] ){
	int i;
	for (i=1 ; i<=n ; i++){
		printf ("nhap diem thu %d(x)(y): ",i);
		fflush (stdin);
		scanf ("%f %f",&A[i].x,&A[i].y);
	}
	printf ("\n");
	for (i=1 ; i<=n ; i++){
		printf ("(%0.1f,%0.1f)",A[i].x,A[i].y);
	}
}
void tim (int n , day A[100]){
	int i;
	float u,v;
	float min;
	float luux , luuy;
	printf ("nhap toa do M(x)(y): ");
	scanf ("%f %f",&u,&v);
	for (i=1 ; i<=n ; i++){
		if (pow ( A[i].x,2)+pow (A[i].y,2)<100){
			min = pow ( A[i].x-u,2)+pow (A[i].y-v,2);
			break;
		}
	}
	if (i>n){
		printf ("khong co diem thuoc duong tron tam O");
	}else {
		for (i=1 ; i<=n ; i++){
			if ((pow ( A[i].x,2)+pow (A[i].y,2)<100)&&(min>pow ( A[i].x-u,2)+pow (A[i].y-v,2))){
				min=pow ( A[i].x-u,2)+pow (A[i].y-v,2);
				luux=A[i].x;luuy=A[i].y;
			}
		}
		printf ("\ndiem gan nhat la: %0.2f,%0.2f",luux,luuy);
	}
}
    void khoangcach (int n , day A[100]){
    	int i;
    	float S=0;
    	for (i=1 ; i<= n ; i++){
    		S=S+(sqrt (pow (A[i].x,2)+pow (A[i].y,2)));
		}
		printf ("S=%f",S);
	}










