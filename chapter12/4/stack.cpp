#include "stack.h"

#include <iostream>

Stack::Stack(int n)
{
    if (n > MAX) {
        std::cout << "超出最大上限，现初始化为 " << MAX << '\n';
        size = MAX;
    } else if (n < 0) {
        std::cout << "栈的大小不能为负, 现初始化为 " << MAX << '\n';
    } else {
        size = n;
    }
    top = 0;
    pitems = new Item[size];
}
Stack::Stack(const Stack &st)
{
    size = st.size;
    top = st.top;
    pitems = new Item[size];
    for (int i = 0; i < size; i++) {
        pitems[i] = st.pitems[i];
    }
}
Stack::~Stack() { delete[] pitems; }
bool Stack::isempty() const { return top == 0; }
bool Stack::isfull() const { return top == MAX; }
bool Stack::push(const Item &item)
{
    if (isfull()) return false;
    pitems[top++] = item;
    return true;
}
bool Stack::pop(Item &item)
{
    if (isempty()) return false;
    item = pitems[--top];
    return true;
}
Stack &Stack::operator=(const Stack &st)
{
    if (this == &st) return *this;
    size = st.size;
    top = st.top;
    delete[] pitems;
    pitems = new Item[size];
    for (int i = 0; i < size; i++) {
        pitems[i] = st.pitems[i];
    }
    return *this;
}

