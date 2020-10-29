cmake_minimum_required(VERSION 3.12)
project(Example LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(NAME example)

# If you have BLAS installed on your system then enable it by uncommenting the following
#option(TENSOR_USE_BLAS "" ON)

add_subdirectory(third_party/tensor)

add_executable(${NAME} main.cpp)
set_target_properties(${NAME} PROPERTIES LINKER_LANGUAGE CXX)

target_link_libraries(${NAME} tensor)
