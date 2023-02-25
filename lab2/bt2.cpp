#include <iostream>
#include <fstream>
using namespace std;

float inPatientCharges(int days, float rate, float medCharges, float servCharges) {
    float totalCharges = days * rate + medCharges + servCharges;
    return totalCharges;
}

float outPatientCharges(float medCharges, float servCharges) {
    float totalCharges = medCharges + servCharges;
    return totalCharges;
}

int main() {
    ofstream outputFile;
    outputFile.open("bao_cao.txt");

    int choice, days;
    float rate, medCharges, servCharges, totalCharges;

    cout << "Nhap 1 neu benh nhan la benh nhan noi tru, 2 neu benh nhan la benh nhan ngoai tru: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Nhap so ngay nam vien: ";
        cin >> days;

        while (days < 0) {
            cout << "Khong chap nhan so ngay am. Vui long nhap lai: ";
            cin >> days;
        }

        cout << "Nhap ty gia hang ngay: ";
        cin >> rate;

        while (rate < 0) {
            cout << "Khong chap nhan ty gia am. Vui long nhap lai: ";
            cin >> rate;
        }

        cout << "Nhap vien phi: ";
        cin >> medCharges;

        while (medCharges < 0) {
            cout << "Khong chap nhan vien phi am. Vui long nhap lai: ";
            cin >> medCharges;
        }

        cout << "Nhap phi dich vu benh vien: ";
        cin >> servCharges;

        while (servCharges < 0) {
            cout << "Khong chap nhan phi dich vu am. Vui long nhap lai: ";
            cin >> servCharges;
        }

        totalCharges = inPatientCharges(days, rate, medCharges, servCharges);
    }
    else if (choice == 2) {
        cout << "Nhap vien phi: ";
        cin >> medCharges;

        while (medCharges < 0) {
            cout << "Khong chap nhan vien phi am. Vui long nhap lai: ";
            cin >> medCharges;
        }

        cout << "Nhap phi dich vu benh vien: ";
        cin >> servCharges;

        while (servCharges < 0) {
            cout << "Khong chap nhan phi dich vu am. Vui long nhap lai: ";
            cin >> servCharges;
        }

        totalCharges = outPatientCharges(medCharges, servCharges);
    }
    else {
        cout << "Lua chon khong hop le. Ket thuc chuong trinh.";
        return 0;
    }

    outputFile << "Tong chi phi la: $" << totalCharges << endl;
    cout << "Bao cao da duoc ghi vao file bao_cao.txt" << endl;
}