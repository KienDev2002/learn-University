#include <stdio.h>
#include <math.h>
void indaydiem (int n , float x[100],float y[100]);
void dientich (int n , float x[100],float y [100]);
void dodai (int n , float x[100], float y[100]);
void xa ( int n , float x[100] , float y[100]){
	int i;
	float max=sqrt (pow (x[1],2) + pow (y[1],2));
	for (i=1;i<=n;i++){
		if (sqrt (pow (x[i],2) + pow (y[i],2)) > max ){
			max=sqrt (pow (x[i],2) + pow (y[i],2));
		}
	}
	for (i=1;i<=n;i++){
		if (max==sqrt (pow (x[i],2) + pow (y[i],2))){
			 		printf ("\n%0.1f %0.1f\n",x[i],y[i]);
		}
	}
}
 int main (){
 	int n ,i;
 	float x[100];
 	float y[100];
 	printf ("nhap so diem n =");
 	scanf ("%d",&n);
 	printf ("nhap day diem\n");
 	for (i=1 ; i<=n ; i++){
 		printf ("toa do diem thu %d la =",i);
 		scanf ("%f",&x[i]);
 		scanf ("%f",&y[i]);
	 }
	indaydiem (n , x,y);
    dientich (n,x,y);
    dodai (n,x,y);
    xa(n,x,y);
 }
 void indaydiem (int n , float x[100],float y[100]){
 	int i;
 	printf ("day diem vua nhap la:");
 	for (i=1 ; i<=n ; i++){
 		printf ("%0.1f %0.1f\n",x[i],y[i]);
	 }
 }
void dientich (int n , float x[100],float y [100]){
	int i;
    float max= sqrt(pow(x[1],2)+pow(y[1],2));
    for (i=2 ; i<=n ; i++){
    	if ((sqrt(pow(x[i]-x[i-1],2)+pow(y[i]-y[i-1],2)))>max){
    		max=sqrt(pow(x[i]-x[i-1],2)+pow(y[i]-y[i-1],2));
		}
	}
	printf("\n DT= %0.2f",max*max*M_PI);
}
void dodai (int n , float x[100], float y[100]){
	int i;
	float dodai =0;
         for (i=2 ; i<=n ; i++){
         	dodai=dodai+sqrt (pow (x[i]-x[i-1],2)+pow (y[i]-y[i-1],2));
		 }
		 dodai=dodai+sqrt (pow(x[n]-x[1],2)+pow(y[n]-y[1],2));
	printf ("\ndo dai = %0.2f",dodai);
}

 
 
 
 
 
 
 
