#include "person.h"
#include <string>
#include <sstream>
#include <vector>
#include <iomanip>
using std::string;
using std::stringstream;
using std::vector;
using std::setw;

Person::Person(string name, string id, string password)
        :name(name), id(id), password(password) {

}
Person::Person(const Person& person):name(person.name), id(person.id), password(person.password) {

}
string Person::toString()const{
    stringstream ss;
    ss << "Nombre: " << setw(5) << name << " ID: " << setw(5) << id;
    return ss.str();
}
string Person::getName()const{
    return name;
}
