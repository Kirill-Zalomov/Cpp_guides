#pragma once


#include <glibmm/ustring.h>


#include "mvc/boolean_setting_module_controller.hpp"
#include "mvc/boolean_setting_module_view.hpp"
#include "mvc/boolean_setting_module_model.hpp"
#include "../../module.hpp"


class boolean_setting_module : public module
{
    // Поля
    boolean_setting_module_model model_;
    boolean_setting_module_view view_;
    boolean_setting_module_controller controller_;


    // Конструкторы и деструкторы
    public: boolean_setting_module(const Glib::ustring& label, bool start_state);
    public: Gtk::Box& get_main_container() override;

};
