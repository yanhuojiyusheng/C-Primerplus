#include <iostream>
#include <cstring>
using namespace std;
const int SLEN=30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
int getinfo(student pa[], int n){
    cout << "请输入学生的信息" <<endl;
    int i;
    for(i=0;i<n;i++){
        char temp[SLEN];
        cout << "请输入姓名: " ;
        if(cin.get(temp,SLEN)){
            strcpy(pa[i].fullname, temp);
        }else {
            break;
        }
        while (cin.get() != '\n')
            continue;
        cout << "请输入爱好: ";
        if(cin.get(temp,SLEN)){
            strcpy(pa[i].hobby, temp);
        }else {
            cin.clear();
        }
        while (cin.get() != '\n')
            continue;
        cout << "请输入等级: ";
        if(!(cin >> pa[i].ooplevel)){
            cin.clear();
        }
        while (cin.get() != '\n')
            continue;
    }
    return i;
}
void display1(student st){
    cout << "姓名：" <<st.fullname << " \t爱好：" <<st.hobby
        << " \t等级：" << st.ooplevel << endl;
}
void display2(const student* ps){
    cout << "姓名：" <<ps->fullname << " \t爱好：" <<ps->hobby
        << " \t等级：" << ps->ooplevel << endl;

}
void display3(const student pa[], int n){
    for(int i=0;i<n;i++){
        display2(pa+i);
    }
}
int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    student* ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for( int i=0; i<entered; i++ ){
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
}


