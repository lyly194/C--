#include <iostream>
using namespace std;
//khai bao va dinh nghia phuong thuc
class SinhVien{
    private:
        string masv;
        string tensv;
    public:
        SinhVien();
        SinhVien(string masv);
        SinhVien(string masv, string tensv);
        void setMaSV(string masv);
        string getMaSV();
        string getTenSV();
        void setTenSV(string tensv);
        void display();
};