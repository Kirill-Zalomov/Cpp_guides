#include "main_window.hpp"
#include <gtkmm/application.h>
#include <gtkmm/settings.h>
#include <cstdlib>


void apply_system_theme()
{
    auto settings = Gtk::Settings::get_default();
    if (settings) {
        settings->property_gtk_theme_name() = "Breeze";
        settings->property_gtk_icon_theme_name() = "breeze";
        settings->property_gtk_font_name() = "Sans 12";
    }
}


int main(int argc, char* argv[])
{
    auto app = Gtk::Application::create("com.example.app");
    apply_system_theme();
    return app->make_window_and_run<main_window>(argc, argv);
}
