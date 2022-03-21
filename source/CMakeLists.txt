cmake_minimum_required(VERSION 3.11)
project(FileTransferSystem)
set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp)

set(${PC_ZeroMQ_INCLUDE_DIRS} "${CMAKE_SOURCE_DIR}/include/cppzmq")
set(${PC_ZeroMQ_LIBRARY_DIRS} "${CMAKE_SOURCE_DIR}/include/libzmq/bin/v140/x64/lib/Debug")

# ZEROMQ
find_package(PkgConfig)
pkg_check_modules(PC_ZeroMQ QUIET zmq)

## use the hint from above to find where 'zmq.hpp' is located
find_path(ZeroMQ_INCLUDE_DIR
        NAMES zmq.hpp
        PATHS ${PC_ZeroMQ_INCLUDE_DIRS}
        )

## use the hint from about to find the location of libzmq
find_library(ZeroMQ_LIBRARY
        NAMES zmq
        PATHS ${PC_ZeroMQ_LIBRARY_DIRS}
        )

set(SOURCE_FILES main.cpp)
add_executable(FileTransferSystemBinary ${SOURCE_FILES})

## add the include directory to our compile directives
target_include_directories(FileTransferSystemBinary PUBLIC ${PC_ZeroMQ_INCLUDE_DIRS})
## at the 0mq library to our link directive
target_link_libraries(FileTransferSystemBinary PUBLIC ${PC_ZeroMQ_LIBRARY_DIRS})