#include "cast.h"
#include "entertainment.h"
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

Cast::Cast(string name, string role)
    :name(name), role(role){

}
string Cast::toString()const{
    stringstream ss;
    ss << "Nombre: " << setw(5) << name << setw(5) << " Rol: " << setw(5) << role;
    return ss.str();
}
string Cast::setRole(int r){
    if(r == 1)
        return "actor";
    else if(r == 2)
        return "director";
    else if(r == 3)
        return "escritor";
    else if(r == 4)
        return "productor";
}
string Cast::getName()const{
    return name;
}
