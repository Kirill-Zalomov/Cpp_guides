#pragma once


#include <gtkmm/window.h>
#include <gtkmm/button.h>
#include <gtkmm/label.h>
#include <gtkmm/box.h>
#include <memory>


#include "modules/module.hpp"
#include "modules/settings/boolean_setting_module/boolean_setting_module.hpp"


class main_window : public Gtk::Window
{
    private: Gtk::Box main_container_;
    private: std::unique_ptr<module> boolean_setting_module_;


    public: main_window();
};
