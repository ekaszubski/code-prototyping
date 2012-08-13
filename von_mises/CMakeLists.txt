cmake_minimum_required(VERSION 2.6)

project( von_mises )

set(PROJECT_EXECUTABLE_DIR bin)
set(PROJECT_INCLUDE_DIR include)
set(PROJECT_LIBRARY_DIR lib)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/${PROJECT_EXECUTABLE_DIR})
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/${PROJECT_LIBRARY_DIR})

include( FindPkgConfig )

pkg_check_modules( GSL REQUIRED gsl )
include_directories( ${GSL_INCLUDE_DIRS} )
link_directories( ${GSL_LIBRARY_DIRS} )

include_directories( ${PROJECT_INCLUDE_DIR} )

add_subdirectory( ${PROJECT_INCLUDE_DIR} )
add_subdirectory( src )

enable_testing()
add_subdirectory( tests )
