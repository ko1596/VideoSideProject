#include <fcntl.h>
#include <unistd.h>

int fd=open(“/dev/video0”,O_RDWR); // 打开设备

close(fd); // 关闭设备