#include "brazo.h"
#include <iostream>

using namespace std;

brazo::brazo(int x_ini, int y_ini, int z_ini){
    x = x_ini;
    y = y_ini;
    z = z_ini;
    objeto = false;
}

double brazo::getX(){
    return x;
}

double brazo::getY(){
    return y;
}

double brazo::getZ(){
    return z;
}

bool brazo::estaSosteniendo(){
    return objeto;
}

void brazo::coger(){
    objeto = true;
}

void brazo::soltar(){
    objeto = false;
}

void brazo::mover(int x_fin, int y_fin, int z_fin){
    x = x_fin;
    y = y_fin;
    z = z_fin;
}
void print(){
    cout << "Brazo en (" << x << ", " << y << ", " << z << ")" << endl;
    if(objeto)
        cout << "Brazo sosteniendo un objeto" << endl;
    else
        cout << "Brazo vacío" << endl;
    
}
