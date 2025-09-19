// status_model.cpp
#include "status_model.h"
#include <iostream>

StatusModel::StatusModel()
: status_("Готов") {
}

StatusModel::~StatusModel() {
}

void StatusModel::set_status(const std::string& status) {
    {
        std::lock_guard<std::mutex> lock(mutex_);
        status_ = status;
    }
    // Отправляем сигнал в главный поток
    status_changed_dispatcher_.emit();
}

std::string StatusModel::get_status() const {
    std::lock_guard<std::mutex> lock(mutex_);
    return status_;
}

Glib::Dispatcher& StatusModel::get_status_changed_signal() {
    return status_changed_dispatcher_;
}
