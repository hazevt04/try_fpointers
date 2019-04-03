cmake_minimum_required( VERSION 2.8.9 )

set( MAIN_NAME "try_fpointers" )

project( try_fpointers )

include_directories( $CMAKE_SOURCE_DIR )

set( SRCS
   "app1.c"
   "app2.c"
   "main.c"
)

option( DEBUG_MACRO "Debug verbosity option" OFF )

if( DEBUG_MACRO )
   add_definitions( -DDEBUG )
endif()

add_executable( "${MAIN_NAME}" "${SRCS}" )


