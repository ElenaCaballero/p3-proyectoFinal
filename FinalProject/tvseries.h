#ifndef TVSERIES
#define TVSERIES

#include "entertainment.h"
#include <string>
#include <vector>
using std::string;
using std::vector;

class TVSeries:public Entertainment{
    unsigned int episodes;
    double buyPrice;
public:
    TVSeries(string, string, int, string, string, string, string, unsigned int);
    TVSeries(const TVSeries&);
    virtual string toString()const;
    virtual double pricing()const;
    virtual string getTitle()const;
    virtual string getDescription()const;
    virtual string getReview()const;
    virtual string getRating()const;
    virtual string getGenre()const;
    virtual string getStudio()const;
    virtual string getReleased()const;
    string getEpisodes()const;
    string getBuyPrice()const;
    string getTotPrice()const;
};

#endif // TVSERIES
