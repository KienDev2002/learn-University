#include <stdio.h>
#include <string.h>
#include <math.h>
typedef struct{
    char bks[50];
    int cho,km;
}thongso;
void nhap(int n,thongso oto[50]){
    int i;
    for(i=1;i<=n;i++){
        printf("\n\t\tNHAP THONG TIN XE (%d)\n",i);fflush(stdin);
        printf("Bien kiem soat xe: ");fflush(stdin);    
        gets(oto[i].bks);
        printf("So cho ngoi xe: ");
        scanf("%d",&oto[i].cho);
        printf("So km da chay: ");
        scanf("%d",&oto[i].km);
    }
}
void xuat(int n,thongso oto[50]){
    int i;
    printf("\n\t\tNHAP THONG TIN XE \n");
    printf("%-20s %-20s %-20s\n","Bien Kiem Soat","So Cho Ngoi","KM");
    for(i=1;i<=n;i++){
        printf("%-20s %-20d %-20d\n",oto[i].bks,oto[i].cho,oto[i].km);
    }
}
void trungbinhcong(int n,thongso oto[50]){
    int i,dem=0;
    float s=0;
    for(i=1;i<=n;i++){
        if(strncmp(oto[i].bks,"29",2)==0){
            s=s+oto[i].cho;
            dem++;
        }
    }
    if(dem==0){
    	printf("\nKhong co bien xe dau 29\n");
	}
	else{
		printf("\nTrung binh cong : %0.2f",s/dem);
	}  
}
void ycuoi(int n,thongso oto[50]){
	int i,demcho=0,max,kq;
	for(i=1;i<=n;i++){
		if(oto[i].cho==16){
			max=oto[i].cho;
			kq=i;
			demcho++;
			break;
		}
	}
	for(i=1;i<=n;i++){
		if(oto[i].cho==16&&oto[i].km>max){
			max=oto[i].cho;
			kq=i;
		}
	}
	if(demcho==0){
		printf("\nKhong co xe!!!\n");
	}
	else{
		printf("\nXe 16 cho chay nhieu nhat la xe so : %d",kq);
	}
}
int main()
{
    int n;
    printf("nhap so oto: "); scanf("%d",&n);
    printf("\t\t1.1\n");
    thongso oto[50];
    nhap(n,oto);
    xuat(n,oto);
    trungbinhcong(n,oto);
    ycuoi(n,oto);
    return 0;
}

