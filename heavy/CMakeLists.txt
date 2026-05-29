cmake_minimum_required(VERSION 3.10)
project(heavy VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_library(heavy SHARED
    src/Vector3.cpp
    src/Force.cpp
    src/PhysicsBody.cpp
    src/PhysicsWorld.cpp
)

target_compile_definitions(heavy PRIVATE HEAVY_BUILD)
target_include_directories(heavy PUBLIC include)

add_executable(heavy_test
    src/main.cpp
)

target_link_libraries(heavy_test heavy)

install(TARGETS heavy DESTINATION lib)
install(DIRECTORY include/heavy DESTINATION include)