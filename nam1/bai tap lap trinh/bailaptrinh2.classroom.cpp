#include<stdio.h>
#include<math.h>
void indayso (int n , float a[100]);
void basolientiep (int n , float a[100]);
void socap2solientiep (int n , float a[100]);
void socapcotonglonhonmuoi (int n , float a[100]);
void GTNN (int n , float a[100]);
void hieulonnhat (int n ,float a[100]);
void giatri(int n, float a[100]);
void GTLN (int n , float a[100]);
void sapxep (int n ,float a[100]);
void tansuat (int n , float a[100]);

 int main (){
 	int n ;
    float a[100];
 	int i;
 	printf ("nhap n =");
 	scanf ("%d",&n);
 	for (int i=1 ; i<=n ; i++){
 		printf ("nhap a[%d]=",i);
 		scanf ("%f",&a[i]);
	 }
	indayso (n,a); 
    basolientiep (n ,a);
    socap2solientiep (n,a);
    socapcotonglonhonmuoi (n ,a);
    GTNN (n ,a);
    hieulonnhat (n ,a);
    giatri(n,a);
    GTLN (n,a);
    sapxep (n,a);
    tansuat (n ,a);

 }			
 // phan 1,2,3,13
 void indayso (int n , float a[100]){
 	printf ("\n day so thuc la :");
 	for (int i=1 ; i<=n ; i++){
 	    printf ("a[%d]=%0.2f\t",i,a[i]);
	 }
	 printf ("\n day so nguyen la :");
	 	for (int i=1 ; i<=n ; i++){
	 		if (a[i]==(int)(a[i])){
	 				 printf ("a[%d]=%d\t",i,(int)a[i]);
			 }
}
     printf ("\n day nguoc lai la :");
     for (int i=n ; i>=1 ; i--){
     	printf ("a[%d]=%0.2f\t",i,a[i]);
	 }
}
//phan 4
 void basolientiep (int n , float a[100]){
 	printf ("\n 3 so trong csc la :");
 	int i;
 	for (int i=2 ; i<n ; i++){
 			if ((a[i-1]+a[i+1])==2*a[i]){
 				printf ("%0.2f %0.2f %0.2f",a[i-1],a[i],a[i+1]);
			 }
	 }
	 if ((a[i-1]+a[i+1])!=2*a[i]){
	 	printf ("khong co day csc");
	 }
}
//phan 5
 void socap2solientiep (int n , float a[100]){
 	 		int dem =0;
 	for (int i=2 ; i<=n ; i++){
 			if (a[i]>a[i-1]){
 				dem++;
			 }
		 }
	 printf ("\n so lan lon hon la = %d",dem);
 }
 //phan 6
 void socapcotonglonhonmuoi (int n , float a[100]){
 	int d=0;
 		for (int i=1 ; i<=n ; i++){
 		    for (int j=i+1 ; j<=n ; j++){
 			if (a[j]+a[i]>10){
 				d++;
			 }
		 }
	}
		 printf ("\n tong 2 so lan lon hon 10 la = %d",d);
 }
  // phan 8
 void giatri(int n, float a[100]){
	int i;
	float gt=1.00, S;
	for (i=1;i<=n;i++){
		gt=gt*sin(a[i]);
		S=S+gt;
	}
	printf("\nGia tri S = %.2f",S);
}
 // phan 9
 void GTNN (int n , float a[100]){
 	int vtri , i;
 	float min =a[1];
 	for (int i= 2; i<=n ; i++){
 		if (min>a[i]){
 			min = a[i];
 			vtri=i;
		 }
	 }
	 	 printf ("\n gia tri min= %0.2f va o vi tri so %d ",min,vtri);
	 }
	 // phan 10
void hieulonnhat (int n , float a[100]){
	float min =a[1];
 	for (int i= 2; i<=n ; i++){
 		if (min>a[i]){
 			min = a[i];
		 }
	 }
	 float max=a[1];
	for (int i= 2; i<=n ; i++){
 		if (max<a[i]){
 			max = a[i];
		 }
	 }
  printf ("\n gia tri hieumax = %0.2f",max-min);
} 
// phan 11
 void GTLN (int n , float a[100]){
 	int i ;
 	float max= a[1];
 	for (i=1 ; i<=n ; i++){
 		if (a[i]>=10 && a[i]<=100){
			 if (a[i]>max){
			 	max=a[i];
			 }
	 }
}
	  printf ("\n gia tri lon nhat max = %0.2f",max);

}
// phan 12
 void sapxep (int n ,float a[100]){
	printf ("\n day tang dan la :");
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
       for (int i=1 ; i<=n ; i++){
       	      printf (" %0.2f\t",a[i]);
	   }
}
// phan 14
void tansuat (int n , float a[100])
{
	printf ("\n");
	int dd=1;
	int j;
	int i=1;
	while (i<=n){
		dd=1;
		for (j=i+1 ; j<=n;j++){
	     if (a[i]==a[j]){
	     	dd++;
		}
	}
		printf ("\n so lan xuat hien cua %0.2f la: %d",a[i],dd);
			i=i+dd;
	}
}




 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
