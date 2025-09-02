#ifndef CPU_IC_NUMBER_OF_CORES_HPP
#define CPU_IC_NUMBER_OF_CORES_HPP


#include "information_collector.hpp"
#include <string>
#include <unistd.h>


namespace os_linux {
    namespace ic {

        /**
        * @class   cpu_ic_number_of_cores
        * @author  Kirill Zalomov
        * @brief   Класс для получения кол-ва ядер процессора.
        *          Для ОС с ядром Linux.
        *
        * @details Класс возвращает кол-во ядер процессора в виде std::string.
        *          Для получения кол-ва ядер процессора используются системные
        *          вызовы ядра Linux.
        */
        class cpu_ic_number_of_cores : public information_collector {

            public: std::string collect() const override;

        };


    }
}


#endif // CPU_IC_NUMBER_OF_CORES_HPP

