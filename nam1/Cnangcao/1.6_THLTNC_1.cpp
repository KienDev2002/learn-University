#include<stdio.h>
#include<math.h>
#include<string.h>
int songaycuathang (int thang , int nam){
	switch(thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:{
			return 31;
			break;
		}	
		case 4:
		case 6:
		case 9:
		case 11:{
			return 30;
			break;
		}	
		case 2:{
			return ((nam%400==0)||(nam%4==0&&nam%100!=0))?29:28;
			break;
		}default:{
		printf("khong co ngay nao cua thang do");
		}
	}
}
void timngaytiep (int ngay , int nam , int thang){
	int songay=songaycuathang(thang,nam);
	if (ngay==songay){
		if (thang==12){
			ngay =1;
			thang=1;
			nam++;
		}else{
			ngay=1;
			thang++;
		}
	}else{
		ngay++;
	}
	printf("\n ngay tiep theo la: ngay %d thang %d thang %d",ngay,thang,nam);
}
int main(){
 	int ngay,thang,nam;
 	do {
 		printf("nhap ngay / thang / nam: ");
 		scanf("%d%d%d",&ngay,&thang,&nam);
 		if  (ngay>31||ngay<1||thang<1||thang>12||nam<1 || thang==2 && ngay>29){
 			printf("vui long nhap lai!\n");
		 }
	 }while (ngay>31||ngay<1||thang<1||thang>12||nam<1 || thang==2 && ngay>29);
	printf("thang %d nam %d co %d ngay",thang,nam,songaycuathang(thang,nam));
	timngaytiep(ngay,nam,thang);
}

