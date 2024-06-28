#include "cpt.h"
#include <vector>
#include <string>
#include <iostream>

int main() {
#ifdef SOME_COMPILE_DEFINITION
    std::cout << "SOME_COMPILE_DEFINITION is defined";
    return 0;
#else
    std::cout << "SOME_COMPILE_DEFINITION not defined";
    return 111;
#endif
    cpt();

    std::vector<std::string> vec;
    vec.push_back("test_package");

    cpt_print_vector(vec);
}
