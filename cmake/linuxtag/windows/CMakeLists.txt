set(CURRENT_TARGET windows)

add_executable(${CURRENT_TARGET}
    ${SRC_DIR}/windows/windows.cpp
    ${SRC_DIR}/windows/mybutton.cpp
    ${SRC_DIR}/windows/mybutton.hpp
    ${SRC_DIR}/windows/mainwindow.cpp
    ${SRC_DIR}/windows/mainwindow.hpp
    ${SRC_DIR}/windows/mainwindow.ui
    ../windows/windows.qrc
)

target_include_directories(${CURRENT_TARGET} PUBLIC
    ${SRC_DIR}/windows
)

include(../../common.cmake)

find_package(Qt6 COMPONENTS Widgets REQUIRED)
target_link_libraries(${CURRENT_TARGET} Qt6::Widgets)
