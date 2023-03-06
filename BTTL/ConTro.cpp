#include <iostream>
using namespace std;
int main()
{
    int a[3];
    a[0] = 5;
    a[1] = 7;
    a[2] = 8;
    
    cout << a, cout << &a[0]<< endl;
    cout << *a << endl;
    cout << a[0] << endl;

    return 0;
}
