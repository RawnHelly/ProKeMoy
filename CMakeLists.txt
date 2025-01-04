cmake_minimum_required(VERSION 3.16)

project(MyQtApp VERSION 1.0)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)

# 查找 Qt5 库
find_package(Qt5 REQUIRED COMPONENTS Core Gui Widgets)

# 添加源文件
add_executable(MyQtApp
    main.cpp
)

# 连接 Qt5 库
target_link_libraries(MyQtApp Qt5::Core Qt5::Gui Qt5::Widgets)
