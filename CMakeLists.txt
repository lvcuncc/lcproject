cmake_minimum_required(VERSION 2.8)
project(server)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_FLAGS "$ENV{CXXFLAGS} -rdynamic -O3 -g std=c++11 -Wall -Wno-deprecated -Werror -Wno-unused-function")

set(LIB_SRC
	server/log.cpp
	)
add_library(server SHARED ${LIB_SRC})
#add_library(server_static STATIC${LIB_SRC})
#SET_TARGET_PROPERTIES (server_static PROPERTIES OUTPUT_NAME "server")

add_executable(test tests/test.cpp)
add_depedencies(test server)
target_link_libraries(test server)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)