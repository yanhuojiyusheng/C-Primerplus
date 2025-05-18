#include <iostream>
const int strsize = 50;
struct bop{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};
using namespace std;
void printBop(const bop* member, int size,int choice){
    for(int i=0;i<size;i++){
        int check=choice;
        if(choice==-1){
        check = member[i].preference;
        }
        switch(check){
            case 0:cout<<member[i].fullname<<endl;break;
            case 1:cout<<member[i].title<<endl;break;
            case 2:cout<<member[i].bopname<<endl;break;
        }
    }
}
int main()
{
    const int MEMBERNUM=5;
    bop member[MEMBERNUM]{
        {"Wimp Macho","job title","WM",0},
        {"Raki Rhodes","Junior Programmer","RR",1},
        {"Celia Laiter","job title","MIPS",2},
        {"Hoppy Hipman","Analyst Trainee","HH",1},
        {"Pat Hand","job title","LOOPY",2}
    };
    cout << "Benevolent Order of Programmers Report"<<endl
        <<"a. display by name "<<"\tb. display by title" <<endl
        <<"c. display by bopname "<<"\td. display by preference"<<endl
        <<"q. quit"<<endl
        <<"Enter your choice: ";
    char choice;
    cin >> choice;
    while(choice!='q'){
        switch(choice){
            case 'a':printBop(member,MEMBERNUM,0);break;
            case 'b':printBop(member,MEMBERNUM,1);break;
            case 'c':printBop(member,MEMBERNUM,2);break;
            case 'd':printBop(member,MEMBERNUM,-1);break;
            default: cout<<"Enter your right choice: ";cin>>choice;continue;
        }
        cout<<"Next choice: ";
        cin>>choice;
    }
    cout<<"Bye!"<<endl;

    return 0;
}

