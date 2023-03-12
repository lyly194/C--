#include <iostream>
using namespace std;
class SinhVien {
    public: //pham vi truy cap, public(khong han che), private(duoc truy cap tu lop ben trong)
        string maSV; //MaSV thuoc tinh
        string tenSV;

};
int main() {
    SinhVien sv1;
    SinhVien sv2;

    sv1.maSV = "1111245";
    sv1.tenSV = "Nguyen Van A";

    sv2.maSV = "1111246";
    sv2.tenSV = "Nguyen Van B";
    cout << sv1.maSV << " - " << sv1.tenSV <<endl;
    cout << sv2.maSV << " - " << sv2.tenSV <<endl;
    return 0;
}