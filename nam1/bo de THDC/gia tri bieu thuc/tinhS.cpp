#include<stdio.h>
#include<math.h>
#include<conio.h>
void tinh1 (int n , float x  );
void tinh2 (int n , float x  );
void tinh3 (int n , float x  );
void tinh4 (int n , float x  );
long GT (int n);
long Mau (int n);
double Tu (int n , float x);
void tinh6 (int n , float x  );

int main(){
	int n;
	float x;
	printf ("nhap n=");
	scanf ("%d",&n);
	printf ("nhap x=");
	scanf ("%f",&x);
	tinh1 (n,x);
	tinh2 (n,x);
	tinh3 (n,x);
	tinh4 (n,x);
    printf("\nS5=%.2f",(double)(Tu(n,x))/(double)(Mau(n)));
    tinh6 (n,x);

}
//bai1
void tinh1 (int n , float x ){
	float S1=2010;
	int i;
	for (int i=1; i<=n ; i++){
		S1=S1+sin(i*x)/(2*i);
	}
	printf ("S1=%0.2f",sqrt(S1));
}
//bai2
void tinh2 (int n , float x ){
	int i;
	float S2=2010;
	for (i=1; i<=n ; i++){
		S2=S2+(pow(x,i)+i)/(2*i);
	}
	printf ("\nS2=%0.2f",sqrt(S2));
}
//bai3.xem lai

double Tu (int n , float x  ){
	int i;
	float Tu=0;
	for (i=1 ; i<=n ; i++){
		Tu=Tu+pow(x,i);
	}
	printf("\nS3=%0.2f",sqrt(S3/Gt));
}
//bai4
void tinh4 (int n , float x  ){
	int i;
	float S4=2010;
	for (i=1 ; i<=n ; i++){
		S4=S4+pow(x,i)/i;
	}
	printf ("\nS4=%0.2f",sqrt(S4));
}
//bai5
long GT (int n){
	int i;
	long x=1;
	for (i=1 ; i<=n ; i++){
	 x = x*i;
	}
   return x;
}
long Mau (int n){
   int i;
   long x=0;
   for (i=1 ; i<=n ; i++){
   	x=x+GT(i);
   }
   return x;
}
double Tu (int n , float x){
	int i;
	long s=0;
	for (i=1 ; i<=n ; i++){
		s=s+pow(x,i);
	}
	return s;
}
//bai6
void tinh6 (int n , float x  ){
	int i;
	float S6=2010;
	for (i=1 ; i<=n ; i++){
		S6=S6+(cos(x)+i)/(i+1);
	}
	printf ("\nS6=%0.2f",S6);
}





















