cmake_minimum_required(VERSION 3.5.1)


include_directories(
   .
)

set(server_example_SRCS
   GAS8.c
   static_model.c
   spidev.c
)

IF(MSVC)
set_source_files_properties(${server_example_SRCS}
                                       PROPERTIES LANGUAGE CXX)
ENDIF(MSVC)

add_executable(server_gis_8
  ${server_example_SRCS}
)

target_link_libraries(server_gis_8
    iec61850
)
