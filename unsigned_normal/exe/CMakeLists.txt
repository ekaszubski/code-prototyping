# gather all sources in current dir using relative filenames
file( GLOB EXE_SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp *.cc *.c )

foreach( source ${EXE_SOURCES} )
    get_filename_component( source_name_base ${source} NAME_WE )
    set( source_name ${source_name_base} )
    set( source_src ${source} )

    add_executable( ${source_name} ${source_src} )
    target_link_libraries( ${source_name} ${PROJECT_NAME} )
endforeach()
