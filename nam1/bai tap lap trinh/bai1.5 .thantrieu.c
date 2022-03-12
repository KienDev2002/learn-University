#include <stdio.h>
#include <math.h>
#include <conio.h>

int main (){
	int a ,b,c,d;
	printf ("nhap a , b, c, d:");
	scanf ("%d%d%d%d",&a,&b,&c,&d);
	if (a==b && b==c&&c==d){
		printf ("khong co gia tri lon nhat");
	}else {
		int max = (a>b)?a:b;
		max = (max >c)?max:c;
		max = (max >d)?max :d;	
		        printf ("GTLN = %d",max);			

}
}
