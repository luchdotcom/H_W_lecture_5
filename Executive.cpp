//
// Created by Lachezar on 6.4.2020 г..
//

#include <cstring>
#include "Executive.h"

Executive::Executive() :Employee(),Manager(),title( new char[69]){
    strcpy(title,"no available position");

}
Executive::Executive( char *name, double salary, unsigned experience, char *man,char* title ) : Employee(name,salary,experience),Manager(name,salary,experience,man),title(new char[69]){
    strcpy(title,"executive");


}
Executive::Executive( const Executive & rhs):Employee(rhs),Manager(rhs),title( new char[strlen(title)+1]) {
    strcpy(title,rhs.title);

}

Executive::~Executive() {
    delete[] title;
    std::cout <<"dest executive\n";

}

Executive &Executive::operator=( const Executive & rhs) {
    if (this!=&rhs) {
        delete this;
        Employee::operator=(rhs);
        Manager::operator=(rhs);
        title=rhs.title;
    }
    return *this;
}

std::ostream &Executive::ins( std::ostream & out) const {
  // Employee::ins(out);

    return Manager::ins( out);
}

int Executive::set_title(char* n) {
    if (this!= nullptr) {
        delete []this;
        title = nullptr;
    }
    title= new char[strlen(n)+1];
    strcpy(title,n);
    delete []title;
    return 0;
}

char *Executive::get_title() const {
    return title;
}

std::ostream& operator<<(std::ostream &out, const Executive& rhs){
    ;
    return rhs.ins(out);
}


