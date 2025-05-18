#include "Plorg.h"
#include <iostream>
#include <cstring>
Plorg::Plorg(const char* s, int ci){
    strcpy(name, s);
    CI = ci;
}
void Plorg::setCI(int a){
    CI = a;
}
void Plorg::show() const{
    std::cout << "名称为 " << name 
            << " 满意指数为 " << CI << std::endl;
}
