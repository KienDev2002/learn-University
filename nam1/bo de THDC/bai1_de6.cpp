#include<stdio.h>
#include<math.h>
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
void tim (int n , TD A[100]){
	int i;
	float u ,v,luux,luuy, min;
	printf("nhap u: ");
	scanf("%d",&u);
	printf("nhap v: ");
	scanf("%d",&v);
	for (i=1;i<=n;i++){
		if( ( pow (A[i].x,2) + pow (A[i].y,2) ) < 100 ){
			min=  pow (A[i].x-u,2) + pow (A[i].y-v,2);
			break;
		}
	}
	for (i=1;i<=n;i++){
		if (  (pow ( A[i].x,2) + pow (A[i].y,2)) <10 &&pow (A[i].x-u,2) + pow (A[i].y-v,2)<=min){
			min=pow (A[i].x-u,2) + pow (A[i].y-v,2);
			luux=A[i].x;
			luuy=A[i].y;
		}
	}
		printf("(%0.2f , %0.2f). ",luux,luuy);
}
float tongkc ( int n , TD A[100]){
	int i;
	float tong=0;
	for (i=1;i<=n;i++){
		tong = tong + sqrt (pow ( A[i].x,2) + pow (A[i].y,2) );
	}
	return tong;
}
int main(){
	TD A[100];
	int n;
	printf("nhap n diem: ");
	scanf("%d",&n);
	nhapin (n,A);
	tim (n,A);
	printf("\n%0.2f",tongkc(n,A));
}
