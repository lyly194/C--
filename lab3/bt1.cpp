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

    cout << "Input the value of 1st element : ";
    cin >> num1;
    cout << "Input the value of 2nd element : ";
    cin >> num2;

    ptr1 = &num1;
    ptr2 = &num2;

    // display the values before swapping
    cout << "The value before swapping are : " << endl;
    cout << "element 1 = " << *ptr1 << endl;
    cout << "element 2 = " << *ptr2 << endl;

    swap(ptr1, ptr2);  // swap the values

    // display the values after swapping
    cout << "The value after swapping are: " << endl;
    cout << "element 1 = " << *ptr1 << endl;
    cout << "element 2 = " << *ptr2 << endl;

    return 0;
}
