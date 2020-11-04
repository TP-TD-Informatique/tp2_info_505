cmake_minimum_required(VERSION 3.17)
project(tp2)

set(CMAKE_CXX_STANDARD 14)

add_executable(tp2 main.cpp Ville.cpp Ville.hpp Arrete.cpp Arrete.hpp Fourmi.cpp Fourmi.hpp utils.cpp utils.hpp Settings.cpp Settings.hpp)

find_package(GTK2 2.6 REQUIRED gtk)

include_directories(${GTK2_INCLUDE_DIRS})
target_link_libraries(tp2 ${GTK2_LIBRARIES})