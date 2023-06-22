

cmake_minimum_required(VERSION 3.10)

project(proxy)

foreach (NAME_FILE  RemoteProxy VirtualProxy)
    message("Proxy is buidling file: ${NAME_FILE}.cpp")
    add_executable(${NAME_FILE} ${NAME_FILE}.cpp)
endforeach ()

