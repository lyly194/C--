#include<iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}
int sum(int a, int b, int c){
    return a + b + c;
}
int main() {
    cout << sum(5, 7) <<endl;
    cout << sum(5, 7, 8)<<endl;
    return 0;
}
