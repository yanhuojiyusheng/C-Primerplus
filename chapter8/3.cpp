#include <iostream>
#include <cctype>
#include <cstring>
void strToUpper(std::string & str){
    for(int i=0;i<str.size();i++){
        str[i] = toupper(str[i]);
    }
}
int main()
{
    using namespace std;
    string str;
    cout << "Enter a string (q to quit): ";
    getline(cin,str);
    while(str != "q"){
        strToUpper(str);
        cout << str << endl;
        cout << "Next string (q to quit): ";
        getline(cin,str);
    }
    cout << "Bye.\n";
    return 0;
}

