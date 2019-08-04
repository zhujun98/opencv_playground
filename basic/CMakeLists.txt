add_executable(basic main.cpp)

target_link_libraries(basic
    opencv_core
    opencv_highgui
    opencv_imgproc
    opencv_imgcodecs)
