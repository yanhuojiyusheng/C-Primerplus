#include "golf.h"
#include <cstring>
#include <iostream>
using namespace std;
void setgolf(golf & g,const char * name, int hc){
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf &g){
    cout << "请输入姓名：";
    cin.getline(g.fullname,Len);
    if(strlen(g.fullname) == 0) 
        return 0;
    cout << "请输入等级：";
    cin >> g.handicap;
    cin.get();
    return 1;
}

void handicap(golf& g, int hc){
    g.handicap = hc;
}

void showgolf(const golf& g){
    cout << "姓名为 " << g.fullname;
    cout << "等级为 " << g.handicap << endl;
}
