#include "cpu_ic_architecture.hpp"


std::string os_linux::ic::cpu_ic_architecture::collect() const {
    struct utsname sysinfo;
    uname(&sysinfo);
    return std::string(sysinfo.machine);
}
