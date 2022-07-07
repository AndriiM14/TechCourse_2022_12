# Auto compile ui design files
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOMOC ON)

include(cmake/utils.cmake)

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

add_executable(client WIN32 main.cpp main_window.cpp main_window.ui)
target_link_libraries(client PRIVATE Qt5::Widgets Qt5::Core nlohmann_json::nlohmann_json)

windeployqt(client)
