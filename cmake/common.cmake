target_compile_definitions(${CURRENT_TARGET} PRIVATE
    -DLOG_FILENAME="linuxtag.log"
)

target_sources(${CURRENT_TARGET} PRIVATE
    ${SRC_DIR}/common/log.cpp
    ${SRC_DIR}/common/log.hpp
)

target_include_directories(${CURRENT_TARGET} PRIVATE
    ${SRC_DIR}/common
)
