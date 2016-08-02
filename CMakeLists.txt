cmake_minimum_required(VERSION 3.1)
project(someRandomTelegramBot)

set(SRC
	src/main.cpp
	src/Parser.cpp)

include_directories(include)

add_subdirectory(tgbot-cpp)
add_subdirectory(SQLiteCpp)

include_directories(tgbot-cpp/include)
include_directories(SQLiteCpp/include)

add_executable(${PROJECT_NAME} ${SRC})
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 14)
target_link_libraries(${PROJECT_NAME} TgBot SQLiteCpp)
