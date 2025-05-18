#include <iostream>
#include <new>
#include <cstring>
struct chaff{
    char dross[20];
    int slag;
};
char buffer[100];
int main()
{
    chaff *p = new (buffer) chaff[2]; 
    strcpy(p[0].dross, "hello");
    p[0].slag= 1;
    strcpy(p[1].dross, "world");
    p[1].slag= 2;
    for(int i=0;i<2;i++){
        std::cout << "dross is " << p[i].dross << " slag is " << p[i].slag <<std::endl;
    }
    return 0;
}

