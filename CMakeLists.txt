cmake_minimum_required(VERSION 3.21)
project(Sklep_z_Grami)

set(CMAKE_CXX_STANDARD 14)


include_directories(lib)
add_executable(Sklep_z_Grami src/main.cpp src/graKomputerowa.cpp src/graKarty.cpp src/system.cpp)
