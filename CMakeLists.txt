cmake_minimum_required(VERSION 3.5)

project(DragonScript LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(INCFILE ${PROJECT_SOURCE_DIR})
set(SRCFILE ${PROJECT_SOURCE_DIR})

set(SRC
    ${SRCFILE}/lexer.cpp
	${INCFILE}/lexer.hpp
	${SRCFILE}/parser.cpp
	${INCFILE}/parser.hpp
	${SRCFILE}/compiller.cpp
	${INCFILE}/compiller.hpp
    )

add_library(DragonScript SHARED ${SRC})
