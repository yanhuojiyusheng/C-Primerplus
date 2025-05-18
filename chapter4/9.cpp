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
    CandyBar* snack = new CandyBar[3];
    snack[0]= {"Mocha Munch", 2.3, 350};
    snack[1]= {"rabbit",1.3, 214};
    snack[2]= {"dragon",2.7,420};

    cout << "snack's brand is "<<snack[0].brand
    << " weight is "<< snack[0].weight
    << " calorie is " << snack[0].calorie<< std::endl;
    cout << "rabbit's brand is "<<snack[1].brand
    << " weight is "<< snack[1].weight
    << " calorie is " << snack[1].calorie<< std::endl;
    cout << "dragon's brand is "<<snack[2].brand
    << " weight is "<< snack[2].weight
    << " calorie is " << snack[2].calorie<< std::endl;
    delete [] snack;
    return 0;
}

