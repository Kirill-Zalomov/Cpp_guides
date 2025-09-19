// status_controller.h
#ifndef STATUS_CONTROLLER_H
#define STATUS_CONTROLLER_H

#include "status_model.h"
#include "status_view.h"
#include <memory>

class StatusController {
public:
    StatusController(std::shared_ptr<StatusModel> model,
                     std::shared_ptr<StatusView> view);
    ~StatusController();

    void initialize();
    void set_status(const std::string& status);

private:
    void on_status_changed();

    std::shared_ptr<StatusModel> model_;
    std::shared_ptr<StatusView> view_;
    sigc::connection status_connection_;
};

#endif // STATUS_CONTROLLER_H
