cmake_minimum_required(VERSION 3.10)

project(full-cmake-non-guided)

add_executable(full-cmake-non-guided main.cpp)
target_include_directories(full-cmake-non-guided PRIVATE include)
target_link_libraries(full-cmake-non-guided PUBLIC tools)

enable_testing()

# Add subdirectories
add_subdirectory(src)   # Source files
add_subdirectory(tests) # Tests

# Doxygen
find_package(Doxygen REQUIRED)
if(DOXYGEN_FOUND)
    set(DOXYGEN_IN ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in)
    set(DOXYGEN_OUT ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)

    configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)

    add_custom_target(doc_doxygen ALL
        COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT}
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        COMMENT "Generating documentation with Doxygen"
        VERBATIM)
endif()