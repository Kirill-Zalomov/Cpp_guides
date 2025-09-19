// status_model.h
#ifndef STATUS_MODEL_H
#define STATUS_MODEL_H

#include <glibmm/dispatcher.h>
#include <mutex>
#include <string>

class StatusModel {
public:
    StatusModel();
    ~StatusModel();

    // Методы для установки статуса
    void set_status(const std::string& status);
    std::string get_status() const;

    // Сигналы для уведомления представления
    Glib::Dispatcher& get_status_changed_signal();

private:
    mutable std::mutex mutex_;
    std::string status_;
    Glib::Dispatcher status_changed_dispatcher_;
};

#endif // STATUS_MODEL_H
