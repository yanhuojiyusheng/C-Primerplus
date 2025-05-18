#include <iostream>
void print(const char* c, int n=0){
    static int count=0;
    count++;
    if(n!=0){
        for(int i=0;i<count;i++)
            std::cout << c <<std::endl; 
    }else{
            std::cout << c <<std::endl; 
    }
}
int main()
{
    using std::cout;
    char str[]{"bueryi"};
    cout << "调用三次\n";
    print(str);
    print(str);
    print(str);
    cout << "使用第二个参数\n";
    print(str, 1);
    cout << "-----------------------------\n";
    print(str, -1);
    
    return 0;
}

