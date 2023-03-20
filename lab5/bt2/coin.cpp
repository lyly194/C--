#include <iostream>
#include "coin.h"
using namespace std;
coin::coin(){}
void coin::tungxu(){
    if (rand() %2 == 0)
        sideup ="heads";
    else
        sideup ="tails";
}
string coin::getSideUp(){
    return this -> sideup;
}
void coin::display(){
    if(sideup == "heads"){
        cout <<"mat ngua";
    }else{
        cout <<"mat sap"<<endl;
    }
}