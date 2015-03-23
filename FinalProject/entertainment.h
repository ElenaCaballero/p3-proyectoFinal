#ifndef ENTERTAINMENT
#define ENTERTAINMENT

#include <string>
#include <vector>
using std::string;
using std::vector;

class Entertainment{
    string title;
    string description;
    int review;
    string rating;
    string genre;
    string studio;
    string released;
public:
    Entertainment(string, string, int, string, string, string, string);
    Entertainment(const Entertainment&);
    virtual string toString()const;
    virtual string getTitle()const;
    virtual string getDescription()const;
    virtual string getReview()const;
    virtual string getRating()const;
    virtual string getGenre()const;
    virtual string getStudio()const;
    virtual string getReleased()const;
    virtual double pricing()const=0;
};

#endif // ENTERTAINMENT
