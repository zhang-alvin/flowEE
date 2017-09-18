cmake_minimum_required(VERSION 3.0)

find_package(SCOREC REQUIRED PATHS ${SCOREC_PREFIX} NO_DEFAULT_PATH)
find_package(MPI_REQUIRED)

set(HEADERS
  elementResidualMethod.h
  ns_errorEstimation.h)

add_library(elementResidualMethod SHARED elementResidualMethod.cpp)
target_include_directories(elementResidualMethod PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
    )

target_link_libraries(elementResidualMethod SCOREC::core)
