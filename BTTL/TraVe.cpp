#include <iostream>
using namespace std;
void calculator(int x, int y, int &addOut, int &subOut)
{
    addOut = x + y;
    subOut = y - x;
}

int main()
{
    int a(6), b(9);
    int add, sub;

    calculator(a, b, add, sub);

    cout << "a + b = "<< add << endl;
    cout << "a - b = "<< sub << endl;

    return 0;
}