#pragma once


#include <gtkmm/box.h>


class module
{
    public: virtual ~module() = default;
    public: virtual Gtk::Box& get_main_container() = 0;
};
