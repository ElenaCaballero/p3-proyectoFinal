#include "person.h"
#include "user.h"
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

User::User(string name, string id, string password, vector<Entertainment*> bought, vector<Entertainment*> rented)
        :Person(name, id, password), bought(bought), rented(rented), balance(0.0){

}

User::User(const User& user):Person(user), bought(user.bought), rented(user.rented), balance(user.balance){

}
void User::setBalance(double balance){
    if(balance < 0)
        cout << "La cantidad de dinero no puede ser negativa" << endl;
    this->balance = balance;
}
string User::toString()const{
    stringstream ss;
    ss << Person::toString() << "Usuario \t" << "Balance:" << setw(5) << balance;;
    return ss.str();
}
double User::Pay(double pay){
    return balance += pay;
}
string User::getName()const{
    return Person::getName();
}
string User::getBalance()const{
    stringstream ss;
    ss << balance;
    return ss.str();
}
double User::Buy(double amount){
    return balance - amount;
}
