#include <iostream>
using namespace std;
int main(){
    int x=10 ;
    cout<<&x <<endl; // toán tử lấy địa chỉ
    cout<<x <<endl; // in ra giá trị của x
    cout<<*(&x) <<endl; // lấy giá trị tại địa chỉ x

    *&x = 20;//là lấy giá trị tại địa chỉ x là 20
    cout<< x <<endl;
    return 0;
}
// int main(){
//     int value =10; // khai báo value = 10
//     int *ptr = &value; // ptr lưu địa chỉ của value
//     *ptr =20; // ptr lấy giá trị bằng 20 thây cho value ban đầu là 10
//     cout << value << endl;
//     return 0;
// }