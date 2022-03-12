#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdbool.h>
bool kitra (int n , int a[100]){
	int i;
		for (i=1 ; i<=n/2; i++){
			if (a[i]!=a[n-i+1]){
				return 0 ;
			}
		}
		return 1;
}
 void sapxep (int n ,int a[100]);
void tansuat (int n , int a[100]);
 int main (){
 	int a[100];
 	int n;
 	printf ("\n nhap n =");
 	scanf("%d",&n);
 	for (int i=1 ; i<=n ; i++){
 		printf ("\n a[%d]=",i);
 		scanf("%d",&a[i]);
	 }
	for (int i=1 ; i<=n ; i++){
		printf ("%d\t",a[i]);
	}
	if (kitra(n,a)==1){
		printf ("mang la doi xung");
	}else {
		printf ("ko phai mang doi xung");
	}
	sapxep (n,a);
	tansuat (n,a);
}
 void sapxep (int n ,int a[100]){
	float stemp = 0;
	for (int i =1 ; i<=n ; i++){
		for (int j=i+1 ; j<=n ; j++){
			if (a[i]>a[j]){
				stemp = a[i];
				a[i]=a[j];
				a[j]=stemp;
			}
		}
}
}
void tansuat (int n , int a[100]){
	int j;
	int dem =1;
	int i=1;
	while (i<=n){
		dem=1;
		for (j=i+1; j<=n ; j++){
			if (a[i]==a[j]){
				dem++;
			}else {
				break;
			}
		}
		printf ("\nso lan xuat hien cua %d la %d ",a[i],dem);
		i=i+dem;
	}
}






