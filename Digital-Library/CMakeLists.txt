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
add_executable(library src/main.cpp
        ${ADMIN_PANEL}
        ${BOOK}
        ${CMD}
        ${COMMAND}
        ${INVOKER}
        ${IO_STREAM}
        ${LIBRARY}
        ${UTILS})

#Run tests
#add_executable(library test/catch.hpp test/src/test.cpp ${BOOK} ${UTILS})