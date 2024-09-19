cmake_minimum_required(VERSION 3.22)

cmake_policy(SET CMP0091 NEW)

set(VCPKG_TARGET_TRIPLET "x64-windows-static")

if(DEFINED ENV{VCPKG_ROOT} AND NOT DEFINED CMAKE_TOOLCHAIN_FILE)
	set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake" CACHE STRING "")
endif()

set(VCPKG_FEATURE_FLAGS versions)

project(folly_case LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(folly CONFIG REQUIRED)

add_executable(folly_case
	main.cpp
)
set_property(TARGET folly_case PROPERTY MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
target_link_libraries(folly_case PRIVATE Folly::folly)
