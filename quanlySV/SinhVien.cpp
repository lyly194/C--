#include "SinhVien.h"
#include <iostream>
using namespace std;
SinhVien::SinhVien(){}
SinhVien::SinhVien(string masv){
    this->masv = masv;
}
SinhVien::SinhVien(string masv, string tensv){
    this->masv = masv;
    this->tensv = tensv;
}
void SinhVien::setMaSV(string masv){
    this->masv = masv;
}
string SinhVien::getTenSV(){
    return this->tensv;
}
void SinhVien::setTenSV(string tensv){
    this->tensv = tensv;
}
string SinhVien::getMaSV(){
    return this->masv;
}
void SinhVien::display(){
    cout << "MaSV: "<<this->masv<<"Ten SV: " <<this->tensv << endl;
}