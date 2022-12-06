cmake_minimum_required(VERSION 3.24)
project(c_project)

set(CMAKE_CXX_STANDARD 14)

add_executable(c_project
        .idea/.gitignore
        .idea/c_project.iml
        .idea/modules.xml
        .idea/vcs.xml
        .idea/workspace.xml
        main.c struc.c struc.h)
