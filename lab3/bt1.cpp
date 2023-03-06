#include <iostream>
using namespace std;

void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int num1, num2;
    int *ptr1, *ptr2;

    cout << "Nhap gia tri cua phan tu thu nhat : ";
    cin >> num1;
    cout << "Nhap gia tri cua phan tu thu hai : ";
    cin >> num2;

    ptr1 = &num1;
    ptr2 = &num2;

    // display the values before swapping
    cout << "Gia tri truoc khi hoan doi la : " << endl;
    cout << "Phan tu 1 = " << *ptr1 << endl;
    cout << "Phan tu 2 = " << *ptr2 << endl;

    swap(ptr1, ptr2);  // swap the values

    // display the values after swapping
    cout << "Gia tri sau khi hoan doi la: " << endl;
    cout << "phan tu 1 = " << *ptr1 << endl;
    cout << "phan tu 2 = " << *ptr2 << endl;

    return 0;
}
