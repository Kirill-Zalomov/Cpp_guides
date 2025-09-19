// status_controller.cpp
#include "status_controller.h"
#include <iostream>

StatusController::StatusController(std::shared_ptr<StatusModel> model,
                                   std::shared_ptr<StatusView> view)
: model_(model), view_(view) {
}

StatusController::~StatusController() {
    if (status_connection_.connected()) {
        status_connection_.disconnect();
    }
}

void StatusController::initialize() {
    // Устанавливаем начальное значение
    view_->set_status_text(model_->get_status());

    // Подключаем сигнал изменения статуса
    status_connection_ = model_->get_status_changed_signal().connect(
        sigc::mem_fun(*this, &StatusController::on_status_changed)
    );
}

void StatusController::set_status(const std::string& status) {
    model_->set_status(status);
}

void StatusController::on_status_changed() {
    // Этот метод вызывается в главном потоке благодаря Glib::Dispatcher
    view_->set_status_text(model_->get_status());
}
