#include<stdio.h>
int ngaycuathang (int thang , int nam){
	switch (thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: {
			return 31;
			break;
		}
		case 4:
		case 6:
		case 9:
		case 11:{
			return 31;
			break;
		}
		case 2:{
			return ((nam %400==0)||(nam %4==0)&&nam%100!=0)?29:28;
			break;
		}default: {
			return 0;
		}
	}
}
int main(){
	int ngay , thang , nam;
	printf("\nnhap ngay thang nam : ");
	scanf("%d%d%d",&ngay,&thang,&nam);
	printf("\n ngay cua thang do la: %d",ngaycuathang(thang,nam));
}
