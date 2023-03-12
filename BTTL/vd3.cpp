#include <iostream>
using namespace std;
class SinhVien {
    string maSV;
    string tenSV;
    public:
    SinhVien(string maSV, string tenSV){
        this->maSV = maSV;
        this->tenSV = tenSV;
    }
    string getMaSV(){
        return this->maSV;
    }
    

void setMaSV(string maSV){
    if (maSV.length() == 7){
        this-> maSV = maSV;
    }
}
string getTenSV(){
    return this->tenSV;
}
void setTenSV(string tenSV){
    this->tenSV = tenSV;
}
void display(){
    cout << this->maSV << " - " << this-> tenSV << endl;
}
};

int main(){
    SinhVien sv1("1111245","Nguyen Van A");//tao va khoi tao gia tri cho doi tuong sv1
    SinhVien sv2("1111246","Nguyen Van B");//tao va khoi tao gia tri cho doi tuong sv2

//hien thi thong tin cua doi tuong sv1, sv2
    sv1.display();
    sv2.display();
    return 0;
}