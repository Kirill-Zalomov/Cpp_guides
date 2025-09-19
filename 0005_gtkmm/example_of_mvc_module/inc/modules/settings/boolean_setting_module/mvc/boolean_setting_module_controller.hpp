#pragma once


#include "boolean_setting_module_view.hpp"
#include "boolean_setting_module_model.hpp"


class boolean_setting_module_controller
{
    // Поля
    boolean_setting_module_model&  model_;
    boolean_setting_module_view&   view_;


    // Конструкторы и деструкторы
    public: boolean_setting_module_controller(
        boolean_setting_module_model& model,
        boolean_setting_module_view& view
    );
    public: boolean_setting_module_controller(const boolean_setting_module_controller& controller);
    public: boolean_setting_module_controller operator=(const boolean_setting_module_controller& controller);


    // Методы
    private: void on_checkbox_toggled();
    private: void on_model_changed(bool news_state);
    private: void update_view_from_model();
};
