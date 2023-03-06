#include <iostream>
using namespace std;
void swap(int &num1, int &num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "IN SWAP: num1 "<< num1 <<"num2 = " << num2 <<endl;

}
int main(){
    int num1(7), num2(8);
    cout <<"before SWAP: num1 = " << num1 << " num2 = " << num2 <<endl;
    swap (num1, num2);
    cout <<"after SWAP: num1 = " << num1 << "num2 = " << num2 <<endl;
    return 0;
}