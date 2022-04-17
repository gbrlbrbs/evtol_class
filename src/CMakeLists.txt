include_directories(${evtol_classes_SOURDE_DIR}/src/lib)

link_directories(${evtol_classes_SOURCE_DIR}/src/lib)

add_subdirectory(lib)

add_executable(main main.cpp)
target_link_libraries(main classes)