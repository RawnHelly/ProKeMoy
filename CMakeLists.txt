cmake_minimum_required(VERSION 3.16)

project(MyQtApp VERSION 1.0)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)

# 查找 Qt5 库
find_package(Qt5 REQUIRED COMPONENTS Core Gui Widgets)

# 查找所有源文件和头文件
file(GLOB SOURCES "src/*.cc")  # 查找 src 目录下的所有 .cpp 文件
file(GLOB HEADERS "include/*.h") # 查找 include 目录下的所有 .h 文件

# 添加可执行文件
add_executable(MyQtApp ${SOURCES} ${HEADERS})

# 连接 Qt5 库
target_link_libraries(MyQtApp Qt5::Core Qt5::Gui Qt5::Widgets)

# 添加 include 目录
target_include_directories(MyQtApp PRIVATE include)

# 如果有头文件在其他目录，可以添加其他路径
# target_include_directories(MyQtApp PRIVATE <other_include_directories>)
