#pragma once


#include <sigc++/sigc++.h>


class boolean_setting_module_model
{
    // Поля
    private: bool is_enabled_;


    // Конструкторы и деструкторы
    public: boolean_setting_module_model(bool start_state);


    // Сигнал для уведомления об изменении состояния
    public: sigc::signal<void(bool)> signal_state_changed;


    // Методы
    public: void set_enabled(bool enabled);
    public: bool is_enabled() const;
};
