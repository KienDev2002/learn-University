#include<stdio.h>
#include<math.h>
#include<string.h>
struct TD {
	float x;
	float y;
};
void nhapin (int n , TD A[100]) {
	int i;
	for (i=1;i<=n;i++){
	printf("nhap hoanh do diem thu %d la: ",i);
	scanf("%f",&A[i].x);
	printf("nhap tung do diem thu %d la: ",i);
	scanf("%f",&A[i].y);
	}
	for(i=1;i<n;i++){
		printf("(%0.2f , %0.2f) , ",A[i].x,A[i].y);
	}
	printf("(%0.2f , %0.2f). ",A[n].x,A[n].y);
}
void dientich (int n , TD A[100]){
	int i;
	float BKmax = sqrt ( pow (A[1].x,2)+ pow (A[1].y,2) );
	for (i=1;i<=n;i++){
	    if (sqrt ( pow (A[i].x,2)+ pow (A[i].y,2) ) > BKmax){
	    	BKmax=sqrt ( pow (A[i].x,2)+ pow (A[i].y,2) );
		}
	}
	printf("\nDien tich la: %0.2f",BKmax*BKmax*M_PI);
}
float dodai (int n , TD A[100]){
	int i;
	float dodai=0;
	for (i=2;i<=n;i++){
		dodai=dodai+sqrt ( pow ( A[i-1].x - A[i].x,2) + pow ( A[i-1].y - A[i].y,2) );
	}
		dodai=dodai+sqrt ( pow ( A[n].x - A[1].x,2) + pow ( A[n].y - A[1].y,2) );	
	return dodai;
}
float tinh (int n , TD A[100]){
	float S=0;
	for (int i=1;i<=n;i++){
		S=S+(pow ( A[i].x-A[i].y ,2 ));
	}
	return sqrt (S);
}
 void dem (int n , TD A[100]){
 	int i, dem=0;
 	float tam = sqrt ( pow (A[1].x,2) + pow (A[1].y,2) );
 	for (i=2;i<=n;i++){
 		if (sqrt ( pow (A[i].x-A[1].x,2) + pow (A[i].y-A[1].y,2) ) < 15){
 			dem++;
		 }
	 }
	 if (dem==0){
	 	printf("\n khong co diem nao nam trong dt");
	 }else {
	 	printf("\n co %d diem nao nam trong dt",dem);	
	 }
 }
 void xahoanh (int n , TD A[]){
 	float max=A[1].y;
 	for (int i=1;i<=n;i++){
 		if (A[i].y>max){
 			max=A[i].y;
		 }
	 }
	 for (int i=1;i<=n;i++){
	 	if (max==A[i].y){
	 		printf("(%0.2f , %0.2f )",A[i].x,A[i].y);
		 }
	 }
 }
int main(){
	int n;
	TD A[100];
	printf("nhap n diem: ");
	scanf("%d",&n);
	nhapin (n,A);
	dientich(n,A);
	printf("\n do dai: %0.2f",dodai(n,A));
	printf("\n S: %0.2f",tinh(n,A));
	dem(n,A);
	xahoanh (n,A);
}
