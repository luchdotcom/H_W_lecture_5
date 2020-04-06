#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "Executive.h"

int main() {
    Employee person;
  //  Employee men("pesho",200,3);

   // s//td::cout<<men;
    //std::cout <<person;
    Manager chef("asen",300,6,"boss");
   // std:: cout << chef;
    Executive *exe= new Executive;



    std::cout <<*exe;
    return 0;
}
