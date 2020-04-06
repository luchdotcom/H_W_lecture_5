//
// Created by Lachezar on 6.4.2020 г..
//

#ifndef H_W_LECTURE_5_EXECUTIVE_H
#define H_W_LECTURE_5_EXECUTIVE_H


#include "Manager.h"
#include "Employee.h"

 class Executive: virtual public Employee, virtual public Manager {
 public:

    Executive();
    Executive( char*, double, unsigned, char*,char*);
    Executive( const Executive&);
    Executive&operator=(const Executive&);
    virtual std::ostream & ins(std::ostream &) const override;
    virtual ~Executive();
    int set_title( char*);

    char * get_title()const ;
 private:
    char * title;

};
//std::ostream& operator <<(std::ostream&, const Executive&);

#endif //H_W_LECTURE_5_EXECUTIVE_H
