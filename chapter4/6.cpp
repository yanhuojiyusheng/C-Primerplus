#include <iostream>
#include <string.h>
struct CandyBar{
    std::string brand;
    float weight;
    int calorie;
};
int main()
{
    using namespace std;
    CandyBar snack[3]{
        {"Mocha Munch", 2.3, 350},
        {"rabbit",1.3, 214},
        {"dragon",2.7,420}};

    cout << "snack's brand is "<<snack[0].brand
    << " weight is "<< snack[0].weight
    << " calorie is " << snack[0].calorie<< std::endl;
    cout << "rabbit's brand is "<<snack[1].brand
    << " weight is "<< snack[1].weight
    << " calorie is " << snack[1].calorie<< std::endl;
    cout << "dragon's brand is "<<snack[2].brand
    << " weight is "<< snack[2].weight
    << " calorie is " << snack[2].calorie<< std::endl;
    return 0;
}

