// status_module.h
#ifndef STATUS_MODULE_H
#define STATUS_MODULE_H

#include "module_interface.h"
#include "status_model.h"
#include "status_view.h"
#include "status_controller.h"
#include <memory>

class StatusModule : public ModuleInterface {
public:
    StatusModule();
    ~StatusModule() override = default;

    // Реализация интерфейса ModuleInterface
    Gtk::Box* get_widget() override;

    // Публичный метод для установки текста
    void set_text(const std::string& text);

private:
    std::shared_ptr<StatusModel> model_;
    std::shared_ptr<StatusView> view_;
    std::shared_ptr<StatusController> controller_;
};

#endif // STATUS_MODULE_H
