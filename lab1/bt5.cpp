#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getData(double *, int);
void selectionSort(double *, int);
double getAverage(double *, int);
void displayData(double *, int, double);

int main()
{
	double *Test,		// cấp phát mảng động
		   Average;		// giữ giá trị trung bình của các điểm
	int Scores;			// giữ số điểm


	// lấy số điểm
	cout << "Ban co bao nhieu cot diem? ";
	cin  >> Scores;

	// tự dộng cấp phát mảng lớn
	// để giữ số điểm do người dùng xác định
	Test = new double[Scores];	// cấp phát bộ nhớ

	getData(Test, Scores);

	selectionSort(Test, Scores);

	Average = getAverage(Test, Scores);

	displayData(Test, Scores, Average);

	return 0;
}

//                                 lấy dữ liệu                                    *
// Hàm này yêu cầu người dùng nhập điểm kiểm tra được lưu trữ trong một mảng. *
// Tham số Scores giữ số điểm kiểm tra được nhập vào. *
void getData(double *Test, int Scores)
{
	cout << "Nhap tung diem.\n";
	for (int i = 0; i < Scores; i++)
	{
		do
		{
			cout << "so diem #" << (i + 1) << ": ";
			cin  >> *(Test + i);

			if (*(Test + i) < 0)
			{
				cout << "Diem phai lon hon 0.\n"
					 << "Nhap lai ";
			}

		} while (*(Test + i) < 0);
	}
}
// lựa chọnSắp xếp *
// Hàm này thực hiện sắp xếp tăng dần trên mảng Test *
// Tham số Scores chứa số điểm trong mảng. *
void selectionSort(double *Test, int Scores)
{   
	int startscan, minIndex;
	double minValue;

	for (startscan = 0; startscan < (Scores - 1); startscan++)
	{
		minIndex = startscan;
		minValue = *(Test + startscan);
		for (int i = startscan + 1; i < Scores; i++)
		{
			if (*(Test + i) < minValue)
			{
				minValue = *(Test + i);
				minIndex = i;
			}

		}
		*(Test + minIndex) = *(Test + startscan);
		*(Test + startscan) = minValue;
	}
} 
// lấy trung bình *
// Hàm này tính giá trị trung bình của các điểm được lưu trữ trong một mảng. *
// Tham số Scores giữ số điểm cần tính trung bình. *
double getAverage(double *Test, int Scores)
{
	double Total;

	for (int i = 0; i < Scores; i++)
	{
		Total += *(Test + i);
	}

	return Total / Scores;
} 
// hiển thị dữ liệu *
void displayData(double *Test, int Scores, double Avg) 
{
	cout << "\n   Diem thi\n";
	cout << "So diem: " << Scores << endl;
	cout << "Diem theo thu tu tang dan:\n";
	for (int i = 0; i < Scores; i++)
	{
		cout << "#" << (i + 1) << ": " << *(Test + i) << endl;
	}
	cout << fixed << showpoint << setprecision(2);
	cout << "Diem trung binh: " << Avg << endl; 
}