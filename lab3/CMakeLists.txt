cmake_minimum_required(VERSION 3.16)

project(untitled4 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Network)

add_executable(untitled4
  main.cpp
  book.h
  book.cpp
  networkmanager.h
  bookadapter.h bookadapter.cpp
)
target_link_libraries(untitled4 Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(untitled4 Qt6::Network)

include(GNUInstallDirs)
install(TARGETS untitled4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
