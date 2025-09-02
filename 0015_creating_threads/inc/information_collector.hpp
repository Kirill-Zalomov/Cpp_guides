#ifndef INFORMATION_COLLECTOR_HPP
#define INFORMATION_COLLECTOR_HPP


#include <string>


/**
* @class   information_collector
* @author  Kirill Zalomov
* @brief   Интерфейс для сбора какой-либо информации.
*
* @details Классы, наследующие данный интерфейс, независимо от типа собираемой
*          ими информации должны возвращать её в виде std::string.
*/
class information_collector {

    public: virtual ~information_collector() = default;
    public: virtual std::string collect() const = 0;

};


#endif // INFORMATION_COLLECTOR_HPP
