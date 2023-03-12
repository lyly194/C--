#include <iostream>
using namespace std;
class SinhVien
{
private:
    string maSV;
    string tenSV;
public:
    SinhVien(){
        cout << "Ham dung duoc goi" << endl;
    };
    ~SinhVien(){
        cout << "ham huy duoc goi" << endl;
    }
};

int main(){
    SinhVien sv1;
    cout << "ket thuc chuong trinh" << endl;
    return 0;
}
