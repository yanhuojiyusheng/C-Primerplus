#include <iostream>
#include <fstream>
int main()
{
    using namespace std;
    ifstream inFile;
    inFile.open("file.txt");
    char letter;
    int num=0;
    while(inFile >> letter){
        num++;
    }
    inFile.close();
    cout << "共有 " << num << " 个字符"<<endl;
    return 0;
}

