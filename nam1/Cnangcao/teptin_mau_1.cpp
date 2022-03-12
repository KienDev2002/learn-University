#include <stdio.h>
#include <conio.h>

int main()
{
	FILE *FileIn; // Khai báo

	// Mở tập tin để đọc
	FileIn = fopen("INPUT.txt", "r");

	// Kiểm tra tập tin có tồn tại
	if(!FileIn)
	{
		printf("\nKhong tim thay tap tin INPUT.txt");
		getch();
		return 0;
	}

	int n; // số lượng

	fscanf(FileIn, "%d", &n);

	int *a = new int[n];
	int Tong = 0;
	for(int i = 0; i < n; i++)
	{
		fscanf(FileIn, "%d", &a[i]);
		Tong += a[i];
	}

	// Đóng file
	fclose(FileIn);

	/*for(int i = 0; i < n; i++)
	{
		printf("%4d", a[i]);
	}*/

	//printf("\nTong la: %d", Tong);

	FILE *FileOut;

	FileOut = fopen("OUTPUT.txt", "w");

	fprintf(FileOut, "Tong la: %d", Tong);

	fclose(FileOut);


	delete[] a;

	//printf("\nn = %d", n);

	getch();
	return 0;
}
