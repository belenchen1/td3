cmake_minimum_required(VERSION 3.14)

project(Ejercicio3)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(mayor_racha_test mayor_racha_test.cpp lib/mayor_racha.cpp lib/test.cpp)
add_executable(mayor_racha_google_test mayor_racha_google_test.cpp lib/mayor_racha.cpp lib/test.cpp)

target_link_libraries(
  mayor_racha_google_test
  gtest_main
)

target_link_libraries(
  mayor_racha_test
  gtest_main
)