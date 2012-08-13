cmake_minimum_required(VERSION 2.4.6)

project( unsigned_normal )

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

INCLUDE( FindPkgConfig )

pkg_check_modules( GSL REQUIRED gsl )
include_directories( ${GSL_INCLUDE_DIRS} )
link_directories( ${GSL_LIBRARY_DIRS} )

include_directories( include )

add_subdirectory( src )
add_subdirectory( exe )
