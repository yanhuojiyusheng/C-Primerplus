#include "winec.h"

#include <iostream>
Wine::Wine(const char* l, int y, const int yr[], const int bot[])
    : string(l), year(y)
{
    first = ArrayInt(yr, y);
    second = ArrayInt(bot, y);
}
Wine::Wine(const char* l, int y) : string(l), year(y)
{
    first = ArrayInt(y);
    second = ArrayInt(y);
}
void Wine::GetBottles()
{
    std::cout << "Enter " << data() << " data for " << year << " year(s):\n";
    for (int i = 0; i < year; i++) {
        std::cout << "Enter year: ";
        std::cin >> first[i];
        std::cout << "Enter bottles for that year: ";
        std::cin >> second[i];
    }
}
int Wine::sum() const { return second.sum(); }
void Wine::Show() const
{
    std::cout << "Wine: " << (const string&)(*this) << std::endl
              << "\tYear \tBottles\n";
    for (int i = 0; i < year; i++) {
        std::cout << "\t" << first[i] << " \t" << second[i] << "\n";
    }
}
