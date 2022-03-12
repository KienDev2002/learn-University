#include<stdio.h>
#include<math.h>
void indaydiem (float x[100],float y[100],int n);
void bankinhmin  (float x[100],float y[100],int n);
int main (){
	float x[100],y[100];
	int n , i;
	printf ("\n nhap so diem :");
	scanf ("%d",&n);
	printf ("nhap day diem : \n");
	for (i=1 ; i<=n ;i++){
		printf ("\n toa do diem thu %d:",i);
		scanf ("%f",&x[i]);
		scanf ("%f",&y[i]);
	}
	indaydiem(x,y,n);
	bankinhmin  (x,y,n);
}
void indaydiem (float x[100],float y[100],int n){
	printf ("\n day diem vua nhap");
	for (int i=1 ; i<=n ; i++){
		printf ("%0.2f %0.2f",x[i],y[i]);
		printf ("\n");
	}
}
void bankinhmin  (float x[100],float y[100],int n){
	int i ;
	float max;
	max = pow (x[i],2)+pow (y[i],2);
	for (int i=2 ; i<=n ; i++){
		if (pow (x[i],2)+pow (y[i],2)>max){
			max=pow (x[i],2)+pow (y[i],2);
		}
	}
	printf ("\n Rmin = %0.2f",sqrt(max));
}








