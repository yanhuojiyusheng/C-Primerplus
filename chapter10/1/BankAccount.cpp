#include "BankAccount.h"
#include <iostream>
void BankAccount::withdraw(double n){
    if(n>deposit){
        std::cout << "取款超过存款的值\n";
    }else{
        deposit -= n;
    }
}
void BankAccount::depositm(double n){
    deposit += n;
}
void BankAccount::showm() const {
    std::cout << "姓名:  " << name << std::endl
             << "账户: " << account << std::endl;
    std::cout << "存款为 " << deposit << std::endl;
} 
