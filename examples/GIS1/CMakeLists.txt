cmake_minimum_required(VERSION 3.5.1)


include_directories(
   .
)

set(server_example_SRCS
   server_example_basic_io.c
   static_model.c
)

IF(MSVC)
set_source_files_properties(${server_example_SRCS}
                                       PROPERTIES LANGUAGE CXX)
ENDIF(MSVC)

add_executable(server_example_gis
  ${server_example_SRCS}
)

target_link_libraries(server_example_gis
    iec61850
)
