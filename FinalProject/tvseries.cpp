#include "entertainment.h"
#include "tvseries.h"
#include <string>
#include <sstream>
#include <vector>
#include <iomanip>
using std::string;
using std::stringstream;
using std::vector;
using std::setw;

TVSeries::TVSeries(string title, string description, int review, string rating,
                string genre, string studio, string released,
                unsigned int episodes)
             :Entertainment(title, description, review, rating, genre, studio, released),
                episodes(episodes), buyPrice(1.99){

}
TVSeries::TVSeries(const TVSeries& series):Entertainment(series), episodes(series.episodes),
            buyPrice(series.buyPrice){

}
string TVSeries::toString()const{
    stringstream ss;
    ss << Entertainment::toString() << " Número de Episodios: " << setw(5) << episodes << " Precio por episodio: "
       << setw(5) << buyPrice;
    return ss.str();
}
double TVSeries::pricing()const{
    return episodes * buyPrice;
}
string TVSeries::getTitle()const{
    return Entertainment::getTitle();
}
string TVSeries::getDescription()const{
    return Entertainment::getDescription();
}
string TVSeries::getReview()const{
    return Entertainment::getReview();
}
string TVSeries::getRating()const{
    return Entertainment::getRating();
}
string TVSeries::getGenre()const{
    return Entertainment::getGenre();
}
string TVSeries::getStudio()const{
    return Entertainment::getStudio();
}
string TVSeries::getReleased()const{
    return Entertainment::getReleased();
}
string TVSeries::getEpisodes()const{
    stringstream ss;
    ss << episodes;
    return ss.str();
}
string TVSeries::getBuyPrice()const{
    stringstream ss;
    ss <<  buyPrice;
    return ss.str();
}
string TVSeries::getTotPrice()const{
    double tot = pricing();
    stringstream ss;
    ss <<  tot;
    return ss.str();
}
