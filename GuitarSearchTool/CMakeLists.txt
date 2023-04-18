cmake_minimum_required(VERSION 3.10)

project(GuitarShop)

set(CMAKE_CXX_STANDARD 11)

# Set source files
set(SRC_FILES
    src/Guitar.cpp
    src/GuitarInventory.cpp
    src/main.cpp
)

# Add executable
add_executable(${PROJECT_NAME} ${SRC_FILES})

# Set include directories
target_include_directories(${PROJECT_NAME} PRIVATE
    include
)

# Set output directory
set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)
