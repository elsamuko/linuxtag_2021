set(CURRENT_TARGET objects)

add_executable(${CURRENT_TARGET}
    ${SRC_DIR}/objects/objects.cpp
    ${SRC_DIR}/objects/doessth.cpp
    ${SRC_DIR}/objects/doessth.hpp
)

include(../../common.cmake)

find_package(Qt6 COMPONENTS Core REQUIRED)
target_link_libraries(${CURRENT_TARGET} Qt6::Core)
