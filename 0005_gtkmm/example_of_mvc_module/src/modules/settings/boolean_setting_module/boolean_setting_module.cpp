#include "modules/settings/boolean_setting_module/boolean_setting_module.hpp"


boolean_setting_module::boolean_setting_module(const Glib::ustring& label, bool start_state)
: model_(start_state), view_(label, start_state), controller_(model_, view_) { }


Gtk::Box& boolean_setting_module::get_main_container()
{
    return view_.get_container_ref();
}
