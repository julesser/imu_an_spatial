rock_library(imu_an_spatial
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(imu_an_spatial_bin Main.cpp
    DEPS imu_an_spatial)

