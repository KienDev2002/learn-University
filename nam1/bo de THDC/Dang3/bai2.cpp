#include<stdio.h>
#include<math.h>
void GTLNvaGTNN (int n , float A[100]);
void lonhon (int n , float A[100]);
void TBC (int n , float A[100]);
void tichmin (int n , float A[100]);
void lemin (int n, float A[100]);
void tichminbatky (int n , float A[100]);
int main(){
	int n;
	float A[100];
	printf ("nhap n=");
	scanf ("%d",&n);
	for (int i=1 ; i<=n ; i++){
		printf ("nhap A[%d]=",i);
		scanf ("%f",&A[i]);
	}
	GTLNvaGTNN (n,A);
	lonhon (n,A);
	TBC (n,A);
	tichmin (n,A);
	lemin (n,A);
	tichminbatky (n,A);
}
void GTLNvaGTNN (int n , float A[100]){
	int i;
	float min=A[1];
	for (i=1 ; i<=n ; i++){
		if (A[i]<=min){
			min=A[i];
		}
	}
	printf ("GTNN=%0.2f",min);
	float max=A[1];
	for (i=1 ; i<=n ; i++){
		if (A[i]>=max){
			max=A[i];
		}
	}
	printf ("\nGTLN=%0.2f",max);
	if(max-min>10){
		printf("\nhieu GTLN va GTNN lon hon 10");
	}else{
		printf("\nhieu GTLN va GTNN khong lon hon 10");
	}
}
void lonhon (int n , float A[100]){
	int i;
	int dem =0;
	for (i=2 ; i<=n ; i++){
		if (A[i]>A[i-1]){
			dem++;
		}
	}
	printf ("\nco %d day 2 ptu lien tiep ma ptu sau lon hon ptu truoc",dem);
}
void TBC (int n , float A[100]){
	int i;
	float S1=0;
	int d=0;
	for (i=1 ; i<=n ; i++){
		if (abs(A[i])>25){
			S1=S1+A[i];
			d++;
		}
	}
	printf("\nTBC=%0.2f",float (abs(S1/d)));
}
void tichmin (int n , float A[100]){
	printf ("\ncap tich 2 so lien tiep nho nhat la: ");
	int i;
	float sothu1=0;
	float sothu2=0;
	float min = A[1]*A[2];
	for (i=2 ; i<=n ; i++){
		if (A[i]*A[i-1]<=min){
			min =A[i]*A[i-1];
			sothu1=A[i];sothu2=A[i-1];
		}
	}
	printf ("%0.2f , %0.2f",sothu1,sothu2);
}
void lemin (int n, float A[100]){
	int i;
	float min;
	for (i=1 ; i<=n ; i++){
		if((A[i]/(2))!=0){
			min=A[i];
			break;
		}
	}
	for (i=1 ; i<=n ; i++){
		if (((A[i]/(2))!=0)&&(A[i]<min)){
			min=A[i];
		}
	}
	printf("\nGTNN le= %0.2f",min);
}
void tichminbatky (int n , float A[100]){
	printf ("\ncap tich 2 so bat ky nho nhat la: ");
	int i;
	float sothu3=0;
	float sothu4=0;
	float min = A[1]*A[2];
	for (i=1 ; i<=n ; i++){
		for (int j=i+1; j<=n ; j++){
			if (A[i]*A[j]<=min){
			min =A[i]*A[j];
			sothu3=A[i];sothu4=A[j];
		}
		}
	}
	printf ("%0.2f , %0.2f",sothu3,sothu4);
}






















