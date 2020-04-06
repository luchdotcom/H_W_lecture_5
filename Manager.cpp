//
// Created by Lachezar on 2.4.2020 г..
//

#include <cstring>
#include <iostream>
#include "Manager.h"



Manager::Manager():Employee(),section(new char[10]){
    strcpy(section,"dd");
}
Manager::Manager( char* name, double salary, unsigned experience, char* section):Employee(name,salary,experience),
section(new char[strlen(section)+1]){
    strcpy(this->section,section);


}
Manager::Manager( const Manager& rhs):Employee(rhs),section( new char[strlen(section)+1]){
    strcpy(section,rhs.section);


}
Manager & Manager::operator=( const Manager& rhs){
    if (this!= &rhs) {
        delete []section;
        Employee::operator=(rhs);
        //section=rhs.section;
        strcpy(section,rhs.section);
    }
    return *this;
}
Manager::~Manager(){
 std::cout <<"manager destructor";
    if (section!= nullptr) {
        delete[] section;
        section= nullptr;
    }
}

std::ostream& Manager:: ins(std::ostream& out)const {
    Employee::ins(out)<<section;
    return out;
}

int Manager:: set_section(){
    return 0;
}

char * Manager:: get_section()const {
    return section;
}
std::ostream &operator<<( std::ostream &out, const Manager &rhs ) {

    return rhs.ins(out);
}