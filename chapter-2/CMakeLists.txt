cmake_minimum_required (VERSION 3.16)
project(DES C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_compile_definitions(TEST_DES)

add_executable(${PROJECT_NAME} src/des.c src/hex.c src/hex.h)

target_include_directories(${PROJECT_NAME} PUBLIC)
target_link_libraries(
        ${PROJECT_NAME}
)
