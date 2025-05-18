#include <iostream>
#include <cstring>
const int BRANDSIZE =50;
struct CandyBar{
    char brand[BRANDSIZE];
    double weight;
    int calorie;
};
void changeCandy(CandyBar& candy, const char*str="Millennium",double w = 2.85,int h=350){
    strcpy(candy.brand, str);
    candy.weight = w;
    candy.calorie = h;
}
void displayCandy(const CandyBar& candy){
    using std::cout;
    cout << "brand is " << candy.brand << " weight is " << candy.weight
        << " calorie is " << candy.calorie << std::endl;
}
int main()
{
    CandyBar candy;
    displayCandy(candy);
    changeCandy(candy);
    displayCandy(candy);
    return 0;
}

