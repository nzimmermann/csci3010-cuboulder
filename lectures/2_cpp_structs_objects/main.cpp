#include "Person.h"
#include <iostream>

int main() {

    Person p;
    p.name = "Alice";
    p.age = 12;

    // Exercises: find out if two different structs containing the same data are ==
    // What happens if you try to << a struct to cout? why?


    Person p2;
    p2.name = "Alice";
    p2.age = 12;

//    if (p == p2) {
//        std::cout << "same" << std::endl;
//    }


    Family f(7);
}
