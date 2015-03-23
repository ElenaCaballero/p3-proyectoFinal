#include "person.h"
#include "premiumuser.h"
#include "entertainment.h"
#include <string>
#include <sstream>
#include <vector>
#include <iomanip>
#include <iostream>
using std::string;
using std::stringstream;
using std::vector;
using std::setw;
using std::cout;
using std::endl;

PremiumUser::PremiumUser(string name, string id, string password, vector<Entertainment*> bought, vector<Entertainment*> rented)
    :Person(name, id, password), bought(bought), rented(rented), balance(0.0){

}
PremiumUser::PremiumUser(const PremiumUser& user)
            :Person(user), bought(user.bought), rented(user.rented), balance(user.balance){

}
void PremiumUser::setSpecialBalance(double balance){
    if(balance < 0)
        cout << "La cantidad de dinero no puede ser negativa" << endl;
    this->balance = balance;
}
string PremiumUser::toString()const{
    stringstream ss;
    ss << Person::toString() << "Usuario Premium \t" << "Balance:" << setw(5) << balance;
    return ss.str();
}
double PremiumUser::Pay(double balance){
    return this->balance += balance + (balance*0.10);
}
string PremiumUser::getName()const{
    return Person::getName();
}
string PremiumUser::getBalance()const{
    stringstream ss;
    ss << balance;
    return ss.str();
}
double PremiumUser::Buy(double amount){
    return balance - amount;
}
