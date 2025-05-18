#include "stack.h"
#include <iostream>
Stack::Stack(){
    top = 0;
}
bool Stack::isempty() const{
    return top == 0;
}
bool Stack::isfull() const{
    return top==MAX;
}
bool Stack::push(const Item & item){
    items[top++] = item;
    return true;
}
bool Stack::pop(Item& item){
    if(top > 0){
        total += items[top-1].payment;
        item = items[--top];
        return true;
    }else{
        return false;
    }
}
void Stack::show() const{
    std::cout << "总额为 " << total << std::endl;
}
