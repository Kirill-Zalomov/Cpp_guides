#include "main_window.hpp"
#include <iostream>


main_window::main_window()
{
    set_title("Демонстрация MVC-модуля");
    set_default_size(720, 480);
    set_size_request(720, 480);
    set_resizable(false);


    // Главный контейнер
    main_container_.set_orientation(Gtk::Orientation::VERTICAL);
    main_container_.set_hexpand(true);
    main_container_.set_vexpand(true);

    boolean_setting_module_ = std::make_unique<boolean_setting_module>("Резервное копирование: ", false);
    main_container_.append(boolean_setting_module_->get_main_container());

    set_child(main_container_);
}
