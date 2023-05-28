cmake_minimum_required(VERSION 3.25)
project(library)

set(CMAKE_CXX_STANDARD 17)

file(GLOB ADMIN_PANEL "src/AdminPanel/*/*")
file(GLOB BOOK "src/Book/*/*")
file(GLOB CMD "src/Cmd/*/*")
file(GLOB COMMAND "src/Command/*/*")
file(GLOB INVOKER "src/Invoker/*/*")
file(GLOB IO_STREAM "src/IOStream/*/*")
file(GLOB LIBRARY "src/Library/*/*")
file(GLOB UTILS "src/Utils/*/*")

file(GLOB TESTS "test/*/*")
#Execute library
add_executable(library src/main.cpp ${UTILS} ${BOOK} ${CMD}  ${INVOKER}  ${COMMAND} src/AdminPanel/Account.h src/IOStream/IOStream.h src/IOStream/IOStream.cpp)

#Run tests
#add_executable(library test/catch.hpp test/src/test.cpp ${BOOK} ${UTILS})