cmake_minimum_required(VERSION 3.25)
project(library)

set(CMAKE_CXX_STANDARD 17)

#file(GLOB CPP_FILES "${CMAKE_CURRENT_SOURCE_DIR}/../cmd/*.cpp")


#set(SOURCE_FILES src/main.cpp
#        ${CPP_FILES} ../cmd/Utils.cpp ../cmd/Utils.h ../cmd/Invoker.cpp ../cmd/Invoker.h)
#

file(GLOB ADMIN_PANEL "src/AdminPanel/*/*")
file(GLOB BOOK "src/Book/*/*")
file(GLOB CMD "src/Cmd/*/*")
file(GLOB COMMAND "src/Command/*/*")
file(GLOB INVOKER "src/Invoker/*/*")
file(GLOB IO_STREAM "src/IOStream/*/*")
file(GLOB LIBRARY "src/Library/*/*")
file(GLOB UTILS "src/Utils/*/*")
add_executable(library src/main.cpp ${UTILS} ${BOOK})
