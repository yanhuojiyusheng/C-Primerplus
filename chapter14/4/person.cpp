#include "person.h"

#include <iostream>
using namespace std;
void Person::Show() const
{
    cout << "姓为: " << firstName << endl;
    cout << "名为: " << secondName << endl;
}

void Gunslinger::data() const { cout << "拔枪时间为: " << time << endl; }
void Gunslinger::Show() const
{
    Person::Show();
    data();
}
const char *Card::COLOR[4]{"Spades", "Hearts", "Diamonds", "Clubs"};

void PokerPlayer::Data() const
{
    cout << "color is " << Card::COLOR[int(card.getColor())] << endl;
    cout << "point is " << card.getPoint() << endl;
}
void PokerPlayer::Show() const
{
    Person::Show();
    Data();
}
void BadDude::Show() const
{
    Person::Show();
    Gunslinger::Show();
    PokerPlayer::Data();
}
