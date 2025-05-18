#include <iostream>
#include <string.h>
struct CandyBar{
    std::string brand;
    float weight;
    int calorie;
};
int main()
{
    CandyBar snack{"Mocha Munch", 2.3, 350};
    std::cout << "snack's brand is "<<snack.brand;
    std::cout << " weight is "<< snack.weight;
    std::cout << " calorie is " << snack.calorie<< std::endl;
    return 0;
}

