#pragma once
struct customer{
    char fullname[35];
    double payment;
};
typedef customer Item;
class Stack
{
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item & item);
    bool pop(Item& item);
    void show() const;
    ~Stack() {}

private:
    enum {MAX = 10};
    Item items[MAX];
    int top;
    double total=0;
};

