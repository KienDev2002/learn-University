#include<stdio.h>
#include<conio.h>
#include<math.h>
void intoado (int n , float x[100],float y[100]);
void sokogocphantut1 (int n , float x[100],float y[100]);
void gocphantut4 ( int n , float x[100],float y[100]);
void dodai ( int n , float x[100], float y[100]);
void demcatox ( int n , float x[100],float y[100]);
void demcatoy ( int n , float x[100],float y[100]);
void namtrendoanthang (int n , float x[100], float y[100]);
void trenox (int n , float x[100],float y[100]);
int main (){
	float x[100],y[100];
	int n , i ;
	int a,b;
	printf ("nhap toa do n diem=");
	scanf ("%d",&n);
	for (i=1 ; i<=n ; i++){
	  printf (" toa do diem %d=",i);
	  scanf ("%f",&x[i]);
	  scanf ("%f",&y[i]);
	}
	intoado(n,x,y);
	sokogocphantut1 (n ,x ,y);
	gocphantut4 ( n,x,y);
	dodai (n , x, y);
	demcatox (n,x,y);
	demcatoy (n,x,y);
	namtrendoanthang (n , x,y);
    trenox (n,x,y);
}
// phan 7
void intoado (int n , float x[100],float y[100]){
	printf ("\n toa do lan luot la");
	int i ;
	for (i=1 ; i<=n ; i++){
		printf ("\n%0.2f  %0.2f",x[i],y[i]);
		printf ("\n");
	}
}
// phan 2
void sokogocphantut1 (int n , float x[100],float y[100]){
	printf ("\n");
	int dem =0 ;
	int dd=0;
	int i;
	for (int i=1 ; i<=n ; i++ )
	{
		if ((x[i]>0) && (y[i]>0));
		else
		{
			dem++;
		}
	}
	printf ("\n so diem ko thuoc goc phan tu thu 1 la :%d",dem);
		if (dem % 5==0)
		{
			printf ("\n co chia het cho 5  ");
		}else {
			printf ("\n khong chia het cho 5");
		}
}
// phan 2
	void gocphantut4 ( int n , float x[100],float y[100]){
		printf ("\n toa do diem goc phan tu t4 la:");
		int i ; 
		long min=99999999;
		for (i=1 ; i<=n ; i++){
			if (x[i]>0 && y[i]<0){
				if ((sqrt)(pow (x[i],2)+pow (y[i],2))<=min){
					min =(sqrt)(pow (x[i],2)+pow (y[i],2));
				}
			}
			printf ("\n");
		}
		printf ("\n%0.2f  %0.2f",x[i],y[i]);
	}
	//phan 3
void dodai ( int n , float x[100], float  y[100]){
	printf ("\ndo dai duong gap khuc bang =");
	float S=0 ;
	float dodaidoan =0;
	for (int i=2; i<= n ; i++){
		dodaidoan = (sqrt)(pow (x[i-1]-x[i],2)+ pow (y[i-1]-y[i],2));
		S=S+dodaidoan;
	}
	if (n<3){
		printf ("%0.2f",dodaidoan);
	}else {
		printf ("%0.2f",S);
	}
}
// phan 4
void demcatox ( int n , float x[100],float y[100]){
	printf ("\nso doan thang cat truc ox la :");
	int dd=0;
	for (int i=2 ; i<=n ; i++){
		if ((x[i]>0&& y[i]>0 && y[i-1]<0)|| (x[i]<0 && y[i]>0 && y[i-1]<0)||(x[i]<0 && y[i]<0&& y[i-1]>0)||(x[i]>0 && y[i]<0&&y[i-1]>0)){
		dd++;
}
}
printf ("%d",dd);
}
void demcatoy ( int n , float x[100],float y[100]){
	printf ("\nso doan thang cat truc oy la :");
	int ddd=0;
	for (int i=1; i<n ; i++){
			for (int j=i+1;j<=n;j++){
		if ((x[i]>0&& y[i]>0 && x[j]<0)|| (x[i]<0 && y[i]>0 && x[j]>0)||(x[i]<0 && y[i]<0&& x[j]>0)||(x[i]>0 && y[i]<0&&x[j]<0)){
			ddd++;
		}
	}
	
}
	printf ("%d",ddd);
}
		void namtrendoanthang (int n , float x[100], float y[100]){
			int i ;
			int a ,b;
			int d=0;
			printf ("\nnhap a =");
			scanf ("%d",&a);
			printf ("nhap b =");
			scanf ("%d",&b);
			for (i=1 ; i<=n ; i++){
				if (y[i]=a*x[i]+b){
				d++;
			}
		}
			printf ("%d",d);
		}
//phan 6
void trenox (int n , float x[100],float y[100]){
    printf ("\nso lan nam tren ox la: ");
	int i ;
	int demm=0;
	for (i=1 ; i<=n ; i++){
		if (y[i]>0){
			demm++;
		}
	}
	printf ("%d",demm);
}






















