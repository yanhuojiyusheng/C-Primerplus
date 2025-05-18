#include <iostream>
#include <cctype>
#include <cstring>
int main()
{
    using namespace std;
    char result[50];
    cout << "请输入内容："<<endl;
    int i=0;
    while((result[i]=cin.get())!='@'){
        if(isdigit(result[i])){
            continue;
        }
        if(islower(result[i])){
            result[i]=toupper(result[i]);
        }
        else{
            result[i]=tolower(result[i]);
        }
        i++;
    }
    result[i]='\0';
    cout << "\n" <<result<<endl;
    return 0;
}

