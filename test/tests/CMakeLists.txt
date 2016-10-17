include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runAllTest test1.cpp test2.cpp)

# add libraries to executable
target_link_libraries(runAllTest gtest gtest_main)
target_link_libraries(runAllTest mylib)

