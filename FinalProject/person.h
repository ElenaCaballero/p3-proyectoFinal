#ifndef PERSON
#define PERSON

#include <string>
#include <vector>
using std::string;
using std::vector;

class Person{
    string name;
    string id;
    string password;
public:
    Person(string, string, string);
    Person(const Person&);
    virtual string toString()const;
    virtual double Pay(double)=0;
    virtual string getName()const;
    virtual string getBalance()const=0;
    virtual double Buy(double)=0;
};

#endif // PERSON
