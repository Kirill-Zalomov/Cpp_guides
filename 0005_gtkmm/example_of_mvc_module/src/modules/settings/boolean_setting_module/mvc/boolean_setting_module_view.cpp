#include "modules/settings/boolean_setting_module/mvc/boolean_setting_module_view.hpp"


boolean_setting_module_view::boolean_setting_module_view(
    const Glib::ustring& label,
    bool start_state
)
{
    label_.set_text (label);
    checkbox_.set_active(start_state);

    container_.append(label_);
    container_.append(checkbox_);
}


Glib::SignalProxy<void()> boolean_setting_module_view::signal_checkbox_toggled()
{
    return checkbox_.signal_toggled();
}


void boolean_setting_module_view::set_checkbox_state(bool state)
{
    checkbox_.set_active(state);
}


const Gtk::CheckButton& boolean_setting_module_view::get_checkbox_object_ref()
{
    return checkbox_;
}


Gtk::Box& boolean_setting_module_view::get_container_ref()
{
    return container_;
}
