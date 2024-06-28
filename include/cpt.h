#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define CPT_EXPORT __declspec(dllexport)
#else
  #define CPT_EXPORT
#endif

CPT_EXPORT void cpt();
CPT_EXPORT void cpt_print_vector(const std::vector<std::string> &strings);
