cmake_minimum_required(VERSION 3.10)
project(chain)

set(CMAKE_CXX_STANDARD 14)

include_directories(ResponsabilityChain)

add_executable(chain
        ResponsabilityChain/ResponsibilityInterface.h
        ResponsabilityChain/ResRequest.cpp
        ResponsabilityChain/ResRequest.h
        ResponsabilityChain/Composite.h
        interface/Button.cpp
        interface/Button.h
        interface/ContainerLayout.cpp
        interface/ContainerLayout.h
        interface/ButtonHandler.cpp
        interface/ButtonHandler.h
        main.cpp
        )
