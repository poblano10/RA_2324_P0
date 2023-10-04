#include <iostream>
#include "brazo.h"

using namespace std;

int main(){
    
    brazo b(0,0,0);
    b.print();
    b.mover(1,1,1);
    b.print();
    b.coger();
    b.print();
    b.mover(2,2,2);
    b.print();
    b.soltar();
    b.print();


    return 0;
}
