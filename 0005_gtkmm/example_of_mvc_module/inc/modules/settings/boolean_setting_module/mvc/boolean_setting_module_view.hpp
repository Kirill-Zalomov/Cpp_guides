#pragma once


#include <gtkmm/box.h>
#include <gtkmm/label.h>
#include <gtkmm/checkbutton.h>
#include <glibmm/ustring.h>


#include <glibmm/signalproxy.h>


class boolean_setting_module_view
{
    // Поля
    private: Gtk::Label label_;
    private: Gtk::CheckButton checkbox_;
    private: Gtk::Box container_;


    // Конструкторы и деструкторы
    public: boolean_setting_module_view(const Glib::ustring& label, bool start_state);


    // Сигналы
    public: Glib::SignalProxy<void()> signal_checkbox_toggled();


    // Методы
    public: void set_checkbox_state(bool state);
    public: const Gtk::CheckButton& get_checkbox_object_ref();
    public: Gtk::Box& get_container_ref();
};
