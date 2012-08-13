cmake_minimum_required(VERSION 2.4.6)

project( probability_distribution )

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

add_definitions( -std=c++0x )

INCLUDE( FindPkgConfig )

pkg_check_modules( GSL REQUIRED gsl )
include_directories( ${GSL_INCLUDE_DIRS} )
link_directories( ${GSL_LIBRARY_DIRS} )

include_directories( include )

add_subdirectory( src )
add_subdirectory( exe )
