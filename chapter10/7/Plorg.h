#pragma once

class Plorg
{
public:
    Plorg(const char* s= "Plorga", int ci = 50);
    void setCI(int a);
    void show() const;
    ~Plorg() {}

private:
    enum {MAX=19};
    char name[MAX];
    int CI;
};

