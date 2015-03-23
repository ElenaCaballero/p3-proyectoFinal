#ifndef MOVIES
#define MOVIES

#include "entertainment.h"
#include "cast.h"
#include <string>
#include <vector>
using std::string;
using std::vector;

class Movies:public Entertainment{
    double runTime;
    unsigned int size;
    vector<Cast*> crew;
    double buyPrice;
    double rentPrice;
    int rentOrbuy;
public:
    Movies(string, string, int, string, string, string, string, double, unsigned int, vector<Cast*>, int);
    Movies(const Movies&);
    virtual string toString()const;
    virtual double pricing()const;
    virtual string getTitle()const;
    virtual string getDescription()const;
    virtual string getReview()const;
    virtual string getRating()const;
    virtual string getGenre()const;
    virtual string getStudio()const;
    virtual string getReleased()const;
    string getRunTime()const;
    string getSize()const;
    string getCrew()const;
    string getBuyPrice()const;
    string getRentPrice()const;
};

#endif // MOVIES
