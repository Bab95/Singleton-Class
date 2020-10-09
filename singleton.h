//
// Created by Babnish Vyas on 09/10/20.
//

#ifndef UNTITLED_SINGLETON_H
#define UNTITLED_SINGLETON_H
#include <iostream>
class singleton {
private:
    int data;
    static singleton* instance;
    singleton();
    singleton(int val);
    //void operator = (const singleton& instance); this is also okay
    singleton& operator = (const singleton& instance);
    singleton(const singleton& instance);

public:
    static singleton* getinstance(){
        if(instance==NULL){
            return new singleton();
        }
        return instance;
    }

    int getdata(){
        return this->data;
    }

    void setdata(int data){
        this->data = data;
    }
};


#endif //UNTITLED_SINGLETON_H
