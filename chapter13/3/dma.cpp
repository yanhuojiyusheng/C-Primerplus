#include "dma.h"

#include <cstring>
#include <iostream>
using std::cout;
using std::endl;

DMA::DMA(const char* l, int r) : rating(r)
{
    label = new char[strlen(l) + 1];
    strcpy(label, l);
}
DMA::DMA(const DMA& d) : rating(d.rating)
{
    label = new char[strlen(d.label) + 1];
    strcpy(label, d.label);
}
DMA& DMA::operator=(const DMA& d)
{
    if (this == &d) return *this;
    label = new char[strlen(d.label) + 1];
    strcpy(label, d.label);
    rating = d.rating;
    return *this;
}
void DMA::View() const
{
    cout << "Label: " << label << endl;
    cout << "Rating: " << rating << endl;
}

lacksDMA::lacksDMA(const char* c, const char* l, int r) : DMA(l, r)
{
    strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}
lacksDMA::lacksDMA(const char* c, const DMA& rs) : DMA(rs)
{
    strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}
void lacksDMA::View() const
{
    DMA::View();
    cout << "Color: " << color << endl;
}
hasDMA::hasDMA(const char* s, const char* l, int r) : DMA(l, r)
{
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}
hasDMA::hasDMA(const char* s, const DMA& rs) : DMA(rs)
{
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}
hasDMA::hasDMA(const hasDMA& hs) : DMA(hs)
{
    style = new char[strlen(hs.style) + 1];
    strcpy(style, hs.style);
}
hasDMA& hasDMA::operator=(const hasDMA& hs)
{
    if (this == &hs) return *this;
    DMA::operator=(hs);
    delete[] style;
    style = new char[strlen(hs.style) + 1];
    strcpy(style, hs.style);
    return *this;
}
void hasDMA::View() const
{
    DMA::View();
    cout << "Style: " << style << endl;
}

