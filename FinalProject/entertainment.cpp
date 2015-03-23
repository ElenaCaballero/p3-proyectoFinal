#include "entertainment.h"
#include <string>
#include <sstream>
#include <vector>
#include <iomanip>
using std::string;
using std::stringstream;
using std::vector;
using std::setw;

Entertainment::Entertainment(string title, string description, int review, string rating,
       string genre, string studio, string released)
    :title(title), description(description), review(review), rating(rating), genre(genre),
    studio(studio), released(released) {

}
Entertainment::Entertainment(const Entertainment& other)
    :title(other.title), description(other.description), review(other.review), rating(other.rating), genre(other.genre),
      studio(other.studio), released(other.released) {

}
string Entertainment::toString()const{
    stringstream ss;
    ss << "Título: " << setw(5) << title << " Descripción: " << setw(5) << description << " Review: " << setw(5) << review
       << " Rating: " << setw(5) << rating << " Genero: " << setw(5) << genre << " Studio: " << setw(5) << studio
          << " Fecha de Lanzamiento: " << setw(5) << released;
    return ss.str();
}
string Entertainment::getTitle()const{
    return title;
}
string Entertainment::getDescription()const{
    return description;
}
string Entertainment::getReview()const{
    stringstream ss;
    ss << review;
    return ss.str();
}
string Entertainment::getRating()const{
    return rating;
}
string Entertainment::getGenre()const{
    return genre;
}
string Entertainment::getStudio()const{
    return studio;
}
string Entertainment::getReleased()const{
    return released;
}

