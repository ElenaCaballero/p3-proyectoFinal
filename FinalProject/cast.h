#ifndef CAST
#define CAST

#include "entertainment.h"
#include <string>
#include <vector>
using std::string;
using std::vector;

class Cast{
    string name;
    string role;
public:
    Cast(string, string);
    string toString()const;
    string setRole(int);
    string getName()const;
};

#endif // CAST
