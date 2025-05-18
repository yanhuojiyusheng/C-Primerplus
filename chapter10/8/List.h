#pragma once
typedef double Item;
class List
{
public:
    List() {len=0;}
    bool is_empty() const;
    bool is_full() const;
    bool add(Item n);
    void visit(void (*pf)(Item &));
    void show() const;
    ~List() {}

private:
    enum {MAX=10};
    Item Items[MAX];
    int len;
};

