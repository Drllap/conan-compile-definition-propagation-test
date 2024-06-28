cmake_minimum_required(VERSION 3.15)
project(cpt CXX)

add_library(${PROJECT_NAME})

target_sources(${PROJECT_NAME}
  PRIVATE
    src/cpt.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC include)

target_compile_definitions(${PROJECT_NAME} PUBLIC SOME_COMPILE_DEFINITION)

set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER "include/cpt.h")
install(TARGETS ${PROJECT_NAME} )
