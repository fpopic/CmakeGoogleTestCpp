cmake_minimum_required(VERSION 3.6)
project(CmakeLearn)

# gcc
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# folders
set(EXECUTABLE_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/bin")
set(LIBRARY_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/bin")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

# search for headers
include_directories(
        include
        lib
)

# compile subprojects too (libs)
add_subdirectory(lib/mylib)
add_subdirectory(test)

# set project soruces
add_executable(CmakeLearn_exe src/main.cpp)

# add libraries to executable
target_link_libraries(CmakeLearn_exe mylib)