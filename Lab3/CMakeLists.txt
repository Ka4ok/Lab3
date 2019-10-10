cmake_minimum_required(VERSION 2.8)
project(hello_world)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_PREFIX_PATH "/usr/include/x86_64-linux-gnu/qt5")
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

find_package( Qt5Core REQUIRED)
find_package( Qt5Widgets REQUIRED)
find_package( Qt5Network REQUIRED)
find_package( Qt5OpenGL REQUIRED)

set(SOURCE_EXE main.cpp)
set(SOURCE_LIB function.cpp hello.cpp )
add_library(hello SHARED ${SOURCE_LIB})
add_library(function SHARED ${SOURCE_LIB})
add_executable(main ${SOURCE_EXE})
target_link_libraries(main hello function Qt5::Core Qt5::Widgets Qt5::Network Qt5::OpenGL ${Boost_LIBRARIES})


