cmake_minimum_required(VERSION 2.4.6)

set( PROJECT_NAME unsigned_normal )

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

include_directories( include )

add_subdirectory( src )
add_subdirectory( exe )
