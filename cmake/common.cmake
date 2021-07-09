target_compile_definitions(${CURRENT_TARGET} PRIVATE
    -DLOG_FILENAME="linuxtag.log"
)

target_sources(${CURRENT_TARGET} PRIVATE
    ${SRC_DIR}/common/log.cpp
)

target_include_directories(${CURRENT_TARGET} PRIVATE
    ${SRC_DIR}/common
)
