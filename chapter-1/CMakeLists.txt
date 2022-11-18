cmake_minimum_required (VERSION 3.16)
project(chapter-1)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME} src/http.c)

target_include_directories(${PROJECT_NAME} PUBLIC)
target_link_libraries(
        ${PROJECT_NAME}
)
