cmake_minimum_required(VERSION 3.19)
project(SmartHostelManagementSystem LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(SmartHostelManagementSystem
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    dialog.h dialog.cpp dialog.ui
    studentmanagement.h studentmanagement.cpp studentmanagement.ui
    roommanagement.h roommanagement.cpp roommanagement.ui
    feemanagement.h feemanagement.cpp feemanagement.ui
)

target_link_libraries(SmartHostelManagementSystem
    PRIVATE
        Qt::Core
        Qt::Widgets
)

install(TARGETS SmartHostelManagementSystem
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET SmartHostelManagementSystem
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
