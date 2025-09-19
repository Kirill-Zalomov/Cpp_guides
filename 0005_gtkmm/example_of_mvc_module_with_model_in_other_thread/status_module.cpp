// status_module.cpp
#include "status_module.h"

StatusModule::StatusModule() {
    // Создаем компоненты MVC
    model_ = std::make_shared<StatusModel>();
    view_ = std::make_shared<StatusView>();
    controller_ = std::make_shared<StatusController>(model_, view_);

    // Инициализируем контроллер
    controller_->initialize();
}

Gtk::Box* StatusModule::get_widget() {
    return view_.get();
}

void StatusModule::set_text(const std::string& text) {
    controller_->set_status(text);
}
