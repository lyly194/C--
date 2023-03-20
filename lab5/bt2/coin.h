#ifndef bt2_coin_h
#define bt2_coin_h
#include <iostream>
using namespace std;
class coin
{
private:
    string sideup;
public:
    coin();
    void tungxu();
    string getSideUp();
    void display();   
};
#endif