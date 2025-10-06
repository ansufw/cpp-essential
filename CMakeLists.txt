cmake_minimum_required(VERSION 3.16)
project(MyCppProject)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Specify the Homebrew clang++ compiler explicitly if needed
set(CMAKE_CXX_COMPILER "/opt/homebrew/opt/llvm/bin/clang++") # Adjust path if necessary

include_directories(include)
add_executable(my_app chap4-1_type-alias/main.cc)