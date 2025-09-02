#include "cpu_ic_number_of_cores.hpp"


std::string os_linux::ic::cpu_ic_number_of_cores::collect() const {
    // Получаем количество доступных ядер
    long cores = sysconf(_SC_NPROCESSORS_ONLN);
    if (cores == -1) {
        return std::string("");
    }
    return std::to_string(cores);
}
