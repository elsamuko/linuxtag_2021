set(CURRENT_TARGET hello)

add_executable(${CURRENT_TARGET} ${SRC_DIR}/hello/hello.cpp)

include(../../common.cmake)
