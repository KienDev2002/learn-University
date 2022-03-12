#include<stdio.h>
#include<string.h>
#include<math.h>
struct TD {
	float x;
	float y;
};
void nhapin (int n , TD A[100]);
void ganO (int n , TD A[100]);
void sapxep (int n , TD A[100]);
int main (){
  int n;
  TD A[100];
  printf("\n nhap n day diem: ");
  scanf("%d",&n);
  nhapin (n,A);
  ganO (n,A);
  sapxep (n,A);
}
void nhapin (int n , TD A[100]){
	int i;
	for (i=1 ;i<=n ; i++){
		printf("nhap hoanh do diem thu %d la: ",i);
		fflush(stdin);
		scanf("%f",&A[i].x);
	     printf("nhap tung do diem thu %d la: ",i);
		fflush(stdin);
		scanf("%f",&A[i].y);	
	}
	for (i=1 ; i<n ; i++){
		printf("(%.1f , %.1f) , ",A[i].x,A[i].y);
	}
		printf("(%.1f , %.1f).",A[n].x,A[n].y);
}
void ganO (int n , TD A[100]){
	printf("\n diem xa O nhat la: ");
	int i;
	int max =sqrt (pow (A[1].x,2)+pow (A[1].y,2));
	for (i=1 ; i<=n ; i++){
		if (max<sqrt(pow (A[i].x,2)+pow (A[i].y,2))){
			max=sqrt (pow (A[i].x,2)+pow (A[i].y,2));
		}
	}
	for (i=1 ; i<=n ; i++){
		if (max==sqrt (pow (A[i].x,2)+pow (A[i].y,2))){
			printf("(%.1f , %.1f) , ",A[i].x,A[i].y);
		}
	}
}
void sapxep (int n , TD A[100]){
	printf("\n cac diem theo thu tu tang dan voi O la: ");
	int i,j;
	for (i=1 ; i<n ; i++){
		for (j=i+1 ; j<=n ; j++){
		    if (sqrt (pow (A[i].x,2)+pow (A[i].y,2))>sqrt (pow (A[j].x,2)+pow (A[j].y,2))){
		    TD 	stemp=A[i];
		    A[i]=A[j];
		    A[j]=stemp;
			}
		}
	}
	for (i=1 ; i<n ; i++){
		printf("(%.1f , %.1f) , ",A[i].x,A[i].y);
	}
		printf("(%.1f , %.1f).",A[n].x,A[n].y);
}




















