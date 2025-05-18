#include "golf.h"
#include <cstring>
#include <iostream>
using namespace std;
golf::golf(){
    fullname[0]='\0';
    handicap = 0;
}
golf::golf(const char * name, int hc){
    strcpy(fullname, name);
    handicap = hc;
}

int golf::setgolf(){
    char name[Len];
    int h;
    cout << "请输入姓名：";
    cin.getline(name,Len);
    if(strlen(name) == 0) 
        return 0;
    cout << "请输入等级：";
    cin >> h;
    cin.get();
    *this = golf(name,h);
    return 1;
}
void golf::hand(int hc){
    handicap = hc;
}

void golf::showgolf()const{
    cout << "姓名为 " << fullname;
    cout << "等级为 " << handicap << endl;
}
