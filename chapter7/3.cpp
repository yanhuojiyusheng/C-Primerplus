#include <iostream>
using namespace std;
struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void display(box b){
    cout << b.maker << " 制作的box高为 " << b.height << 
        " 宽为 " << b.width << " 长为 " << b.length 
        << " 容积为 " << b.volume<<endl;
}
void setVolume(box* b){
    b->volume = b->height * b->width * b->length;
}
int main()
{
    box Box={ "bueryi", 10,24,53};
    display(Box);
    cout << "设置容积" <<endl;
    setVolume(&Box);
    display(Box);
    return 0;
}

