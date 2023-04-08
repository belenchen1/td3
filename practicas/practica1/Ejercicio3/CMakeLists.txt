cmake_minimum_required(VERSION 3.0)

project(03_)

set(CMAKE_CXX_STANDARD 14)

add_executable(login_suve login_suve.cpp lib/sucesion_de_fibonacci.cpp lib/seguridad.cpp)
add_executable(mayor_racha_test mayor_racha_test.cpp lib/mayor_racha.cpp lib/test.cpp)