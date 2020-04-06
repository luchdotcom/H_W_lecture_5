//
// Created by Lachezar on 2.4.2020 г..
//

#include <cstring>
#include <iostream>
#include "Employee.h"

Employee::Employee() :name(new char[10]),salary(0),experience(0){
    strcpy_s(name,strlen(name)+1,"no");
  //  std::cout << " name :"<< this->name<<"\n salary :"<<salary<<"\n experience :"<<experience;
}



Employee::Employee( char *name, double salary, unsigned experience ):name(name),salary(salary),experience(experience) {

}

Employee::Employee( const Employee & rhs):name(new char [strlen(name)+1]),salary(rhs.salary),experience(rhs.experience){
    strcpy(this->name,rhs.name);
}

Employee &Employee::operator=( const Employee & rhs) {
    if (this !=&rhs) {
        delete this;
        this->set_name(rhs.name);
        salary=rhs.salary;
        experience=rhs.experience;
    }
    return *this;
}

Employee::~Employee() {
    std::cout<<"destructor Employee\n";
   // delete name;
}

int Employee::set_name( char * n) {
    if (this!= nullptr) {
        delete[] this;
        name= nullptr;
    }
    name=new char[strlen(n)+1];
    strcpy(name,n);
    delete [] name;// ?trqbwa li da go ima
    return 0;
}

std::ostream& Employee:: ins(std::ostream& out)const {
    out<< "\nname :"<<name<<"\nsalary :"<<salary<<"\nexperience :"<<experience;
    return out;
}

int Employee::set_salary( double sal) {
    salary=sal;
    return 0;
}

int Employee::set_experience( unsigned experience ) {
    this->experience=experience;
    return 0;
}

char *Employee::get_name() const {
    return name;
}

double Employee::get_salary() const {
    return salary;
}

unsigned Employee::get_experience() const {
    return experience;
}

std::ostream &operator<<( std::ostream &out, const Employee &rhs ) {

    return rhs.ins(out);
}
