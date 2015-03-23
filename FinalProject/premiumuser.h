#ifndef PREMIUMUSER
#define PREMIUMUSER

#include "person.h"
#include "entertainment.h"
#include <string>
#include <vector>
using std::string;
using std::vector;

class PremiumUser:public Person{
    vector<Entertainment*> bought;
    vector<Entertainment*> rented;
    double balance;
public:
    PremiumUser(string, string, string, vector<Entertainment*>, vector<Entertainment*>);
    PremiumUser(const PremiumUser&user);
    void setSpecialBalance(double);
    virtual string toString()const;
    virtual double Pay(double);
    virtual string getName()const;
    virtual string getBalance()const;
    virtual double Buy(double);
};

#endif // PREMIUMUSER
