//
// Created by Babnish Vyas on 09/10/20.
//

#include "singleton.h"
singleton *singleton::instance = 0;
singleton& singleton::operator=(const singleton &instance) {
    std::cout<<"not allowed as it will make new objects!!!!!!!"<<std::endl;
    data = instance.data;
    return *this;
}
singleton::singleton(){
    std::cout<<"Calling constructor"<<std::endl;
    data = 0;
}
singleton::singleton(int val){
    data = val;
    std::cout<<"calling out parameterized constructor"<<std::endl;
}
singleton::singleton(const singleton& instance){
    std::cout<<"Calling copy constructor "<<std::endl;
    std::cout<<"Shouldn't be allowed "<<std::endl;
}