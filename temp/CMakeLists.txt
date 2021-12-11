cmake_minimum_required(VERSION 3.20)
project(temp)

set(CMAKE_CXX_STANDARD 14)

add_executable(temp main.cpp source/clothes.cpp header/clothes.h source/page.cpp header/page.h source/account.cpp header/account.h source/library.cpp header/library.h)
