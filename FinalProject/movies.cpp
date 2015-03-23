#include "cast.h"
#include "entertainment.h"
#include "movies.h"
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

Movies::Movies(string title, string description, int review, string rating,
                string genre, string studio, string released, double runTime,
               unsigned int size, vector<Cast*> crew, int rentOrbuy)
             :Entertainment(title, description, review, rating, genre, studio, released),
                runTime(runTime), size(size), crew(crew), buyPrice(14.99), rentPrice(4.99), rentOrbuy(rentOrbuy){

}
Movies::Movies(const Movies& movie):Entertainment(movie), runTime(movie.runTime), size(movie.size),
                crew(movie.crew), buyPrice(movie.buyPrice), rentPrice(movie.rentPrice), rentOrbuy(movie.rentOrbuy){

}
string Movies::toString()const{
    stringstream ss;
    ss << Entertainment::toString() << " Tiempo de Duración: " << setw(5) << runTime << " Tamaño: " << setw(5) << size
       << "Elenco y Personal: " << endl;
    for(int i = 0; i < crew.size(); i++){
        ss << crew.at(i)->toString() << endl;
    }
    ss << "Precio de venta: " << setw(5) << buyPrice << " Precio de renta: " << setw(5) << rentPrice;
    return ss.str();
}
double Movies::pricing()const{
    if(rentOrbuy == 0 && rentOrbuy != 1)
        return rentPrice;
    else
        return buyPrice;
}
string Movies::getTitle()const{
    return Entertainment::getTitle();
}
string Movies::getDescription()const{
    return Entertainment::getDescription();
}
string Movies::getReview()const{
    return Entertainment::getReview();
}
string Movies::getRating()const{
    return Entertainment::getRating();
}
string Movies::getGenre()const{
    return Entertainment::getGenre();
}
string Movies::getStudio()const{
    return Entertainment::getStudio();
}
string Movies::getReleased()const{
    return Entertainment::getReleased();
}
string Movies::getRunTime()const{
    stringstream ss;
    ss << runTime;
    return ss.str();
}
string Movies::getSize()const{
    stringstream ss;
    ss << size << "p";
    return ss.str();
}
string Movies::getCrew()const{
    for(int i = 0; i < crew.size(); i++)
        return crew.at(i)->getName();
}
string Movies::getBuyPrice()const{
    stringstream ss;
    ss << buyPrice;
    return ss.str();
}
string Movies::getRentPrice()const{
    stringstream ss;
    ss << rentPrice;
    return ss.str();
}
