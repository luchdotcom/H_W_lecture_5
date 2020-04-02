#include <iostream>
#include "Employee.h"
#include "Manager.h"

int main() {
    Employee person;
    Employee men("pesho",200,3);

    std::cout<<men;
    std::cout <<person;
    Manager chef;
    std:: cout << chef;
    return 0;
}
