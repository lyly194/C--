#include "SinhVien.h"
#include <iostream>
using namespace std;
int main()
{
    SinhVien sv1("20IT111", "A");
    SinhVien sv2("1","B");
    sv1.display();
    sv2.display();

    // sv1.setMaSV("1111245");
    // sv1.setTenSV("Nguyen Van A");

    // sv2.setMaSV("1111246");
    // sv2.setTenSV("Nguyen Van B");
    // cout <<  << endl;
    // cout << sv2.getMaSV() << "-" << sv2.getTenSV() << endl;
    return 0;
}
