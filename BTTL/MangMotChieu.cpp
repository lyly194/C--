#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    double a[n];
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    double minVal = a[0];
    double maxVal = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < minVal) {
            minVal = a[i];
        }
        if (a[i] > maxVal) {
            maxVal = a[i];
        }
    }

    cout << "Doan chua tat ca cac gia tri trong mang: [" << minVal << ", " << maxVal << "]" << endl;

    return 0;
}
