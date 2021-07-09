set(CURRENT_TARGET widgets)

add_executable(${CURRENT_TARGET}
    ${SRC_DIR}/widgets/widgets.cpp
    ${SRC_DIR}/widgets/clickme.cpp
    ${SRC_DIR}/widgets/clickme.hpp
)

include(../../common.cmake)

find_package(Qt6 COMPONENTS Core Widgets REQUIRED)
target_link_libraries(${CURRENT_TARGET} Qt6::Core Qt6::Widgets)
