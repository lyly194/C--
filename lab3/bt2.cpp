#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;

    cout << "Nhap so luong phan tu can luu tru trong mang(toi da 10) : ";
    cin >> num;

    int arr[num];

    cout << "Nhap vào " << num << " so phan tu cua mang" << endl;
    for(int i=0; i<num; i++)
    {
        cout << "Phan tu - " << i+1 << " : ";
        cin >> *(arr+i);
        sum += *(arr+i);
    }

    cout << "Tong cua mang la: " << sum;

    return 0;
}
