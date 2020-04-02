//
// Created by Lachezar on 2.4.2020 г..
//
//Задача. Създайте йерархия от класове за работник и мениджър (Manager разширява Employee).
///Базовият клас да има следните член-данни: име, заплата, стаж. За производния клас добавете
// отдел от тип string. Създайте функция, която принтира името, отдела и заплатата за един мениджър.
// След което разширете класа Manager в клас Executive. Напишете функция, която отпечатва думата Executive,
// следвана от информацията идваща от класа Manager.
#ifndef H_W_LECTURE_5_MANAGER_H
#define H_W_LECTURE_5_MANAGER_H



#include "Employee.h"

class Manager : public Employee{
public:
    Manager();
    Manager( char*, double, unsigned, char*);
    Manager( const Manager&);
    Manager& operator=( const Manager&);
    virtual ~Manager();

    virtual std::ostream& ins(std::ostream&)const ;

    int set_section();

    char * get_section()const ;
private:
    char* section;

};


#endif //H_W_LECTURE_5_MANAGER_H
