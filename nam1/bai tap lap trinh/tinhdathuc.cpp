#include<stdio.h>
#include<math.h>
void nhapmang (int n , float a[100]);
void inmang (int n , float a[100]);
float tinhDTn (int n , float a[100],float x0);
float tinhDTm (int m , float b[100],float x0);
 int main (){
 	int n ,m  ;
 	float x0;
 	float a[100];
 	float b[100];
 	printf ("nhap bac cua da thuc  Pn = ");
 	scanf ("%d",&n);
 	printf ("nhap bac cua da thuc Qm = ");
 	scanf ("%d",&m);
 	printf ("nhap x0=");
 	scanf ("%f",&x0);
 	printf ("da thuc Pn "); 
 	nhapmang (n,a);
 	printf ("da thuc Qm");
 	nhapmang(m,b);
 	printf ("da thuc Pn");
 	inmang(n,a);
 	printf ("\n da thuc Qm");
 	inmang(m,b);
 	printf ("\n DTn= %0.2f",tinhDTn(n,a,x0));
 	printf ("\n DTm= %0.2f",tinhDTm(m,b,x0));
 	if (tinhDTn(n,a,x0)-tinhDTn(n,a,x0)<0){
 		printf ("khong the khai can");
	 }else {
	 	 	printf ("\n %0.2f",sqrt(tinhDTn(n,a,x0)-tinhDTm(m,b,x0)));
	 }
	 }
	 void nhapmang(int n , float a[100]){
	 	for (int i = 0 ; i<=n ; i++){
 		printf ("phan tu bac [%d]=",i);
 		scanf ("%f",&a[i]);
	 }
}
	 void inmang (int n , float a[100]){
	 	int i;
	 	for (i=0 ; i<=n ; i++){
	 		printf ("\n %0.2f",a[i]);
		 }
	 }
	 float tinhDTn (int n , float a[100] , float x0){
	 	int i ;
	 	float t=0 ;
	 	for (i=0 ; i<=n ; i++ ){
	 		t+=a[i]*pow(x0,i);
		 }
		 return t;
	 }
	 float tinhDTm (int m , float b[100],float x0)
{
	 	int i ;
	 	float t=0 ;
	 	for (i=0 ; i<=m; i++ ){
	 		t+=b[i]*pow(x0,i);
		 }
		 return t;
}
	 
	 
	 
	 
	 
	 
	 
	 
