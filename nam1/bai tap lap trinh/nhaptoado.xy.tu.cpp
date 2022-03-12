#include <stdio.h>
#include <math.h>
void indaydiem (int n , float x[100],float y[100]);
float Rmin (int n , float x[100],float y[100]);
void dodai (int n , float x[100], float y[100]);

int main (){
	int n ,i ;
	float x[100],y[100];
		printf ("nhap so diem n=");
		scanf ("%d",&n);
	for (i=1 ; i<=n ; i++){
		printf ("day diem thu %d =",i);
		scanf ("%f",&x[i]);
		scanf ("\n%f",&y[i]);
	}
	indaydiem (n,x,y);
	
	printf ("\n S=%0.2f",pow(Rmin ( n , x, y),2)*3,14);
	dodai(n,x,y);
}
void indaydiem (int n , float x[100],float y[100]){
	int i ;
	printf ("day diem vua nhap la :");
	for (i=1 ; i<=n ; i++){
		printf ("\n %0.2f %0.2f",x[i],y[i]);
	}
}
float Rmin (int n , float x[100],float y[100]){
	int i ;
	float S;
	float max= pow (x[i],2)+pow (y[i],2);
	for (i=1 ; i<=n ; i++){
		if (max <  pow (x[i],2)+pow (y[i],2)){
			max= pow (x[i],2)+pow (y[i],2);
		}
	}
return sqrt (max);
}
void dodai (int n , float x[100], float y[100]){
    int i;
    float dodai =0;
    for (i=2 ; i<=n ; i++){
    	dodai = dodai+(sqrt(pow(x[i-1]-x[i],2))+(pow(y[i-1]-y[i],2)));
	}
	dodai=dodai+(sqrt(pow(x[n]-x[1],2)+(pow(y[n]-y[1],2))));
	printf ("\ndodai=%0.2f",dodai);
}

















