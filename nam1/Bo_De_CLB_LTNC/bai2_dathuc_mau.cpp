#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct sv{
	char ma[100], ten[100];
	char truong;
	float t, l , h, diem;
};
void nhap(sv *a, int *n, FILE *f){\
	// cap phat dong
	fscanf(f, "%d\n", n);
	for(int i=0;i<*n;i++){
		fscanf(f, "%[^\n]\n", &a[i].ma);
		fscanf(f, "%[^\n]\n", &a[i].ten);
		fscanf(f, "%c\n%f %f %f\n", &a[i].truong, &a[i].t, &a[i].l, &a[i].h);
		a[i].diem = (a[i].t + a[i].l + a[i].h)/3;
	}
}
void xuatsv(sv a){
	printf("%-10s%-20s%-5c%-5.2f%-5.2f%-5.2f%-5.2f\n", a.ma, a.ten, a.truong, a.t, a.l, a.h, a.diem);
}
void xuat(sv *a, int n){
	for(int i=0;i<n;i++){
		xuatsv(a[i]);
	}
}
void timtt(sv *a, int n){
	float max = -1;
	int s[3] = {};
	for(int i=0; i<n;i++){
		if(max < a[i].diem) max = a[i].diem;
	}
	for(int i=0;i<n;i++){
		if(a[i].diem == max){
			if(a[i].truong == 'A')s[0]++;
			else if(a[i].truong == 'B') s[1]++;
			else s[2]++;
		} 
	}
	int m = 0;
	for(int i=0; i<3; i++){
		m = m<s[i] ? s[i] : m;
	}
	printf("Truong co thu khoa nhieu nhat la: ");
	for(int i=0;i<n;i++){
		if(s[i]==m){
			printf("%c", i+'A');
		}
	}
	printf("\nSo thu khoa la: %d\n", m);
}
void dtb(sv *a, int n){
	int s[3]={};
	float d[3] = {};
	for(int i=0;i<n;i++){
		if(a[i].truong == 'A'){
			s[0]++;
			d[0] += a[i].diem;
		}
		else if(a[i].truong == 'B'){
			s[1]++;
			d[1] += a[i].diem;
		}
		else{
			s[2]++;
			d[2] += a[i].diem;
		}
	}
	float m = 0;
	for(int i=0;i<3;i++){
		d[i] = d[i] / s[i];
		m = m < d[i] ? d[i] : m;
	}
		printf("Truong co dtb cao nhat la: ");
	for(int i=0;i<3;i++){
		if(d[i] == m) printf("%c ", i+'A');
	}
}
void ddh(sv *a, int n){
	float san;
	int ok = 0;
	printf("Nhap diem san: ");
	scanf("%f", &san);
	printf("DS sv ddh: \n");
	for(int i=0;i<n; i++){
		if(a[i].diem >= san && a[i].t >=1 && a[i].l >= 1 && a[i].h > 1){
			xuatsv(a[i]);
			ok = 1;
		}
	}
	if(ok == 0) printf("Khong co sv nao ddh!");
}
int main()
{
	int n;
	sv a[100];
//	char tenfile[100];
//	printf("Nhap ten file: ");
//	gets(tenfile);
	FILE *fi = fopen("bai2_dathuc.txt", "r");
 
	nhap(a, &n, fi);
	xuat(a, n);
	timtt(a, n);
	dtb(a, n);
	ddh(a, n);
 
 
}

