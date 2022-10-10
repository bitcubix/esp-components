set(sources "hello_world.c")
set(includes "include")

idf_component_register(SRCS ${sources} INCLUDE_DIRS ${includes})
