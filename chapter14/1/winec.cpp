#include "winec.h"

#include <iostream>
Wine::Wine(const char* l, int y, const int yr[], const int bot[])
    : label(l), year(y)
{
    data.first = ArrayInt(yr, y);
    data.second = ArrayInt(bot, y);
}
Wine::Wine(const char* l, int y) : label(l), year(y)
{
    data.first = ArrayInt(y);
    data.second = ArrayInt(y);
}
void Wine::GetBottles()
{
    std::cout << "Enter " << label << " data for " << year << " year(s):\n";
    for (int i = 0; i < year; i++) {
        std::cout << "Enter year: ";
        std::cin >> data.first[i];
        std::cout << "Enter bottles for that year: ";
        std::cin >> data.second[i];
    }
}
int Wine::sum() const { return data.second.sum(); }
void Wine::Show() const
{
    std::cout << "Wine: " << label << std::endl << "\tYear \tBottles\n";
    for (int i = 0; i < year; i++) {
        std::cout << "\t" << data.first[i] << " \t" << data.second[i] << "\n";
    }
}
