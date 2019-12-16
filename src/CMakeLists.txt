rock_library(imu_an_spatial
    SOURCES an_packet_protocol.c ntripclient.c spatial_packets.c
    HEADERS an_packet_protocol.h ntripclient.h spatial_packets.h)

rock_executable(imu_an_spatial_bin
    DEPS imu_an_spatial)

