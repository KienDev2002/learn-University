#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct Sach {
	char MS[50];
	char T[50];
	int NXB;
	long gia;
};
struct Sach *a;
void docfile(int *n , FILE *p1 ,struct Sach **a){
	fscanf(p1,"%d\n",n);
	*a = (Sach*)malloc((*n)*sizeof(Sach));
	int i=0;
	for (;;){
		fscanf(p1,"%[^\n]\n %[^\n]\n %d\n %li\n",(*a)[i].MS,(*a)[i].T,&(*a)[i].NXB,&(*a)[i].gia);
		i++;
		if (feof(p1)) break;
	}
}
int main(){

}

