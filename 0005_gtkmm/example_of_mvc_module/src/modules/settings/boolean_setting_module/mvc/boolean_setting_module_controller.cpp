#include "modules/settings/boolean_setting_module/mvc/boolean_setting_module_controller.hpp"


boolean_setting_module_controller::boolean_setting_module_controller(
    boolean_setting_module_model& model,
    boolean_setting_module_view&  view
)
: model_ (model),
  view_  (view)
{
    // Привязка сигналов
    view_.signal_checkbox_toggled().connect (
        sigc::mem_fun (*this, &boolean_setting_module_controller::on_checkbox_toggled)
    );

    model_.signal_state_changed.connect (
        sigc::mem_fun (*this, &boolean_setting_module_controller::on_model_changed)
    );

    // Инициализация view из model
    update_view_from_model();
}


void boolean_setting_module_controller::on_checkbox_toggled()
{
    // Обработка действия пользователя
    const Gtk::CheckButton& checkbox_from_view = view_.get_checkbox_object_ref();
    model_.set_enabled(checkbox_from_view.get_active());
}


void boolean_setting_module_controller::on_model_changed(bool new_state)
{
    // Обновление view при изменении модели
    view_.set_checkbox_state(new_state);
}


void boolean_setting_module_controller::update_view_from_model()
{
    view_.set_checkbox_state(model_.is_enabled());
}


boolean_setting_module_controller::boolean_setting_module_controller(
    const boolean_setting_module_controller& controller
) : model_(controller.model_), view_(controller.view_) { }


boolean_setting_module_controller boolean_setting_module_controller::operator=(
    const boolean_setting_module_controller& controller
)
{
    return boolean_setting_module_controller(controller.model_, controller.view_);
}
