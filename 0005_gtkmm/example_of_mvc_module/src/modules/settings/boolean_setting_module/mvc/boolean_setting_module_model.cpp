#include "modules/settings/boolean_setting_module/mvc/boolean_setting_module_model.hpp"


void boolean_setting_module_model::set_enabled(bool enabled)
{
    if(is_enabled_ != enabled)
    {
        is_enabled_ = enabled;
        signal_state_changed.emit(is_enabled_);
    }
}


bool boolean_setting_module_model::is_enabled() const
{
    return is_enabled_;
}


boolean_setting_module_model::boolean_setting_module_model(bool start_state)
{
    is_enabled_ = start_state;
}
