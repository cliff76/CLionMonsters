cmake_minimum_required(VERSION 3.9)
project(MyProject)

set(CMAKE_CXX_STANDARD 11)

add_executable(MyProject main.cpp Monster.cpp Monster.h Zombie.cpp Zombie.h Ogre.cpp Ogre.h)