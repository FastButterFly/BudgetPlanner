cmake_minimum_required(VERSION 4.3)

project(BudgetPlanner)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
	src/main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})
