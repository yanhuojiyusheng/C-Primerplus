#pragma once
class DMA
{
private:
    char* label;
    int rating;

public:
    DMA(const char* l = "null", int r = 0);
    DMA(const DMA& d);
    virtual ~DMA() { delete[] label; };
    DMA& operator=(const DMA& d);
    virtual void View() const = 0;
};
class baseDMA : public DMA
{
public:
    baseDMA(const char* l = "null", int r = 0):DMA(l,r){}
    void View() const { DMA::View(); }
};
class lacksDMA : public DMA
{
private:
    enum { COL_LEN = 40 };
    char color[COL_LEN];

public:
    lacksDMA(const char* c = "blank", const char* l = "null", int r = 0);
    lacksDMA(const char* c, const DMA& rs);
    void View() const;
};
class hasDMA : public DMA
{
private:
    char* style;

public:
    hasDMA(const char* s = "none", const char* l = "null", int r = 0);
    hasDMA(const char* s, const DMA& rs);
    hasDMA(const hasDMA& hs);
    ~hasDMA(){delete [] style;}
    hasDMA& operator=(const hasDMA& rs);
    void View() const;
};
