//
// Created by Lachezar on 2.4.2020 г..
//Задача. Създайте йерархия от класове за работник и мениджър (Manager разширява Employee).
///Базовият клас да има следните член-данни: име, заплата, стаж. За производния клас добавете
// отдел от тип string. Създайте функция, която принтира името, отдела и заплатата за един мениджър.
// След което разширете класа Manager в клас Executive. Напишете функция, която отпечатва думата Executive,
// следвана от информацията идваща от класа Manager.

#ifndef H_W_LECTURE_5_EMPLOYEE_H
#define H_W_LECTURE_5_EMPLOYEE_H


class Employee {
public:
    Employee();
    Employee( char*, double, unsigned);
    Employee(const Employee&);
    Employee&operator=(const Employee&);

    virtual~Employee();
    virtual std::ostream& ins(std::ostream&)const ;

    int set_name(char*);/// int set_name(const char*);  кой вариант е правилен
    int set_salary( double);
    int set_experience( unsigned);

    char* get_name()const ;
    double get_salary()const ;
    unsigned get_experience()const ;
private:
    char * name;
    double salary;
    unsigned experience;

};
std::ostream& operator <<(std::ostream&, const Employee&);


#endif //H_W_LECTURE_5_EMPLOYEE_H
