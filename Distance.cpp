//
// Created by Babnish Vyas on 09/10/20.
//

#include "Distance.h"

Distance::Distance() {
    inches = 0;
    feet = 0;
}
Distance::Distance(int f, int i):inches(i),feet(f){
    std::cout<<"Parametrized constructor called"<<std::endl;
}
Distance& Distance::operator=(const Distance &d) {
    /*although its return type can be void but then it won't work in cases like a = b = c
     *will work fine in a = b case though
     *Assignement operator will be called when an already initialized object will be assigned value
     * from another object
     * not in case of creation of new object from already created object
     * In that case ONLY copy constructor will be called
     * If we don't declare our own compiler will generate default copy constructor*/
    std::cout<<"Assignment Operator called here"<<std::endl;
    inches = d.inches;
    feet = d.feet;
    return *this;
}
void Distance::display() {
    std::cout<<"Inches::"<<inches<<" "<<"Feet::"<<feet<<std::endl;
}
Distance::Distance(const Distance& copy) {
    std::cout<<"Copy constructor called"<<std::endl;
    inches = copy.inches;
    feet = copy.feet;
}