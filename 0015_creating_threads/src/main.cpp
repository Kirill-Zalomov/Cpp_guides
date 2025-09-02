#include <iostream>
#include <memory>


#include "cpu_ic_architecture.hpp"
#include "cpu_ic_number_of_cores.hpp"
#include "information_collector.hpp"


int main() {

    std::unique_ptr<information_collector> ic_cores =
        std::make_unique<os_linux::ic::cpu_ic_number_of_cores>();

    std::unique_ptr<information_collector> ic_architecture =
        std::make_unique<os_linux::ic::cpu_ic_architecture>();


    std::cout << "Number of cores: "
              << ic_cores->collect()
              << "\n"
              << "Architecture:    "
              << ic_architecture->collect()
              << std::endl;

    return 0;
}
