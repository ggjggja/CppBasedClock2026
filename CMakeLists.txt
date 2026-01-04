cmake_minimum_required(VERSION 3.10)
project(CppBaseClock2026)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
    main.cpp clock.cpp
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Ofast")
add_compile_options(-Wno-interference-size -Wno-volatile)

add_executable(CppBasedClock2026 ${SOURCES})