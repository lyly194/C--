#include <iostream>
using namespace std;
class SinhVien {
    string maSV;
    string tenSV;
    public:
    string getMaSV() { 
        return this -> maSV; }

void setMaSV(string maSV){
    if (maSV.length() == 10){
        this-> maSV = maSV;
    }
}
string getTenSV(){
    return this->tenSV;
}
void setTenSV(string tenSV){
    this->tenSV = tenSV;
}
};

int main(){
    SinhVien sv1;
    SinhVien sv2;

    sv1.setMaSV("1111245");
    sv1.setTenSV("Nguyen Van A");

    sv2.setMaSV("1111246");
    sv2.setTenSV("Nguyen Van B");
    cout << sv1.getMaSV() << "-" << sv1.getTenSV() << endl;
    cout << sv2.getMaSV() << "-" << sv2.getTenSV() << endl;
    return 0;
}