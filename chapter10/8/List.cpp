#include "List.h"
#include <iostream>

bool List::is_empty() const{
    return len == 0;
}
bool List::is_full() const{
    return len == MAX;
}
bool List::add(Item n){
    if(len < MAX){
        Items[len++] = n;
        return true;
    }
    return false;
}
void List::visit(void (*pf)(Item &)){
    for(int i=0;i<len;i++){
        pf(Items[i]);
    }
}
void List::show() const{
    for(int i=0;i<len;i++){
        std::cout<< Items[i] << " ";        
    }
    std::cout<<"\n";
}
