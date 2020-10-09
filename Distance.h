//
// Created by Babnish Vyas on 09/10/20.
//

#ifndef UNTITLED_DISTANCE_H
#define UNTITLED_DISTANCE_H
#include <iostream>

class Distance {
private:
    int feet;
    int inches;

public:
    Distance();
    Distance(int f,int i);
    Distance& operator=(const Distance& d);
    Distance(const Distance& d);
    void display();
};


#endif //UNTITLED_DISTANCE_H
