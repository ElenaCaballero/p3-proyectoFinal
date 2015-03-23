#ifndef USER
#define USER

#include "person.h"
#include "entertainment.h"
#include <string>
#include <vector>
using std::string;
using std::vector;

class User:public Person{
    vector<Entertainment*> bought;
    vector<Entertainment*> rented;
    double balance;
public:
    User(string, string, string, vector<Entertainment*>, vector<Entertainment*>);
    User(const User&);
    void setBalance(double);
    virtual string toString()const;
    virtual double Pay(double);
    virtual string getName()const;
    virtual string getBalance()const;
    virtual double Buy(double);
};

#endif // USER
