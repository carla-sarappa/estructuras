cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)

file(GLOB SOURCES
        ./*.h
        ./*.cpp
        #        ../LinkedLists/FunctionalLinkedLists/FunctionalLinkedLists.cpp
        #        ../LinkedLists/FunctionalLinkedLists/FunctionalLinkedLists.h
        ../LinkedLists/DestructiveLinkedLists/DestructiveLinkedLists.cpp
        ../LinkedLists/DestructiveLinkedLists/DestructiveLinkedLists.h
        )

add_executable(Practica ${SOURCES})
