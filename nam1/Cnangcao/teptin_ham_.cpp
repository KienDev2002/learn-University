#include <stdio.h>
#include <conio.h>

//void DocDuLieu(int &a, int &b, FILE *&FileIn)
//{
//	FileIn = fopen("INPUT.txt", "r");
//	fscanf(FileIn, "%d", &a);
//	fscanf(FileIn, "%d", &b);
//}
int main()
{
	int a, b;
	FILE *FileIn; // Khai báo 
	// Mở tập tin để đọc
	FileIn = fopen("input.txt", "r");
	// Kiểm tra xem file có tồn tại hay không ?
	if(!FileIn)
	{
		printf("\nKhong tim thay file INPUT.txt");
		getch();
		return 0;
	}
	/* 
	printf là xuất dữ liệu ra màn hình (ghi ra màn hình)
	fprintf là xuất dữ liệu ra file (ghi ra file)
	scanf là đọc dữ liệu từ bàn phím vào chương trình
	fscanf là đọc dữ liệu từ file vào chương trình
	*/
	fscanf(FileIn, "%d", &a);
	fscanf(FileIn, "%d", &b);
	// Đóng tập tin
	fclose(FileIn);
	printf("\na = %d & b = %d", a, b);
	int Tong = a + b;
	int Hieu = a - b;
	int Tich = a * b;
	float Thuong = (float)a / b;
	FILE *FileOut; // Khai báo file
	// Máy tự động tạo ra cho ta
	FileOut = fopen("output.txt", "w");
	fprintf(FileOut, "%d + %d = %d", a, b, Tong);
	fprintf(FileOut, "\n%d - %d = %d", a, b, Hieu);
	fprintf(FileOut, "\n%d * %d = %d", a, b, Tich);
	fprintf(FileOut, "\n%d / %d = %f", a, b, Thuong);
	fclose(FileOut); // Đóng file lại.
	getch();
	return 0;
}
