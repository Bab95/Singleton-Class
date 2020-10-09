#include <iostream>
#include <vector>
#include "singleton.h"
#include "Distance.h"
using namespace std;

int main(){
    singleton *singleton_instance = singleton_instance->getinstance();
    singleton_instance->setdata(190);
    cout<<singleton_instance->getdata()<<endl;
    //singleton *s = new singleton(); not allowed as constructor is public
    Distance *d = new Distance(78,67);
    Distance nd = *(d);//copy constructor
    d->display();
    nd.display();
    Distance* tmp = &nd;//copy constructor
    if(tmp==d){
        cout<<"SAME"<<endl;
    }
    Distance* dd = new Distance(nd);//copy constructor
    dd->display();
    nd = *dd = *d; //assignment operator
}
