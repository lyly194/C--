#include <iostream>
using namespace std;
class SinhVien{
    private:
    string maSV;
    string tenSV;
    public:
    SinhVien();
    SinhVien(string maSV){
        this->maSV = maSV;
    };
    SinhVien(string maSV, string tenSV ){
        this->maSV = maSV;
        this->tenSV = tenSV;
    };
};
int main(){
    SinhVien sv1("1111245","Nguyen Van A");
    SinhVien sv2;
    SinhVien sv3("1111247");
}